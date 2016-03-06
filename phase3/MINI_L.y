/* Group Members: Katherine Gallaher (861100447), Julia Perez (861030684) */

%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <ctype.h>
 #include <sstream>
 #include <vector>
 #include <string>
 #include <map>
 #include <fstream>
 #include <iostream>
 using namespace std; 

 extern int currLine;
 extern int currPos;
 extern int yylex(void);
 void yyerror(const char *msg);
 bool var_in_table(string val);
 bool arr_valid_size(int val);
 bool ident_is_array(string val);
 int sym_type(string val);
 void do_readwrite(string curr);
 bool check_if_temp(string val);
 struct symtable_entry{
	int type;
	int a_size;
	string name;
	symtable_entry() :type(0), a_size(0), name() {}
 };

 string filename;
 bool add = false, sub = false; 
 bool mult = false, divide = false, mod = false; 
 bool readst = false, writest = false; 
 bool andp = false, orp = false; 
 ostringstream out;
 ostringstream errors;

 vector<symtable_entry> sym_table;
 vector<string> t_vars;
 vector<string> p_vars;
 vector<string> l_labels; 

 vector <string> t;
%}

%union{
  char* identToken;
  int numberToken;
}

%error-verbose
%start prog_start
%token PROGRAM BEGIN_PROGRAM END_PROGRAM INTEGER ARRAY OF IF THEN ENDIF
%token ELSE ELSEIF WHILE DO BEGINLOOP ENDLOOP CONTINUE READ WRITE 
%token NOT TRUE FALSE SEMICOLON COLON COMMA ASSIGN L_PAREN R_PAREN
%token <identToken> IDENT 
%token <identToken> NUMBER 
%left OR AND SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE
%nonassoc IF_PREC ELSE_PREC

%type <identToken> statement
%type <identToken> Var
%type <identToken> expression 
%type <identToken> multiplicative_exp
%type <identToken> relation_exp
%type <identToken> term 
%type <identToken> terms 
%type <identToken> exprlist 
%type <identToken> comp 
%type <identToken> Vars 
%type <identToken> bool_exp 
%type <identToken> relation_and_exp
%type <identToken> andlist
%type <identToken> relationexplist
%% 
prog_start:
			|
			PROGRAM IDENT {filename = $2;} SEMICOLON block END_PROGRAM {}
			;
block: 
			declarations BEGIN_PROGRAM{out <<": START\n"; } statements { }
			;

declarations:
			declaration SEMICOLON declarations{ }
			|  { }
			;

declaration:
			IDENT more_idents COLON ARRAY L_PAREN NUMBER R_PAREN OF INTEGER {
				bool valid = true, arrvalid=true;
				arrvalid = arr_valid_size(atoi($6));
				valid = var_in_table($1);
				if(arrvalid && !valid){
					symtable_entry temp;
					temp.type = 1; 
					temp.a_size = atoi($6);
					temp.name = $1; 
					sym_table.push_back(temp);
				}
				else{
					errors << "Variable " << $1 << " is already declared" <<endl;
				}
			}
			| IDENT more_idents COLON INTEGER { 
  				bool valid = true;
				valid = var_in_table($1);
				if(!valid){
					symtable_entry temp;
					temp.type = 0; 
					temp.name = $1; 
					sym_table.push_back(temp);
				}
				else{
					errors << "Variable " << $1 << " is already declared" <<endl;
				}
			}


more_idents:
			COMMA IDENT more_idents { 
				bool valid = true;
				valid = var_in_table($2);
				if(!valid){
					symtable_entry temp;
					temp.type = 0; 
					temp.name = $2; 
					sym_table.push_back(temp);
				}
				else{
					errors << "Variable " << $2 << " is already declared" <<endl;
				}
			}
			|  {  }
			;
statements:
			statements statement SEMICOLON { }
			| statement SEMICOLON { }
			;			
statement:
			Var ASSIGN expression {
				//here it can either be = or []=, check which and then put in out , var decides 
				string var = $1; 
				int i = var.find(" ",0);
				if(i != string::npos){//array on lhs
					string a, b, c;
					a = var.substr(0,i);
					b = var.substr(i+1);
					c = $3;
					if(!check_if_temp(a) )
						a.insert(0,"_");
					if(!check_if_temp(b) )
						b.insert(0,"_");
					if(!check_if_temp(c) )
						c.insert(0,"_");

					out << "[]= " << a << ", "<< b<< ", "<< c << endl;
				}
				else{
					string exp = $3;	
					if(!check_if_temp(var) )
						var.insert(0,"_");
					
					int i = exp.find(" ",0);
					if(i != string::npos){//array on rhs 
						string a, b;
						a = exp.substr(0,i);
						b = exp.substr(i+1);

						if(!check_if_temp(a) )
							a.insert(0,"_");
						if(!check_if_temp(b) )
							b.insert(0,"_");

						out << "=[] " << var << ", " << a << ", " << b <<endl;
					}
					else{
						if(!check_if_temp(exp) )
							exp.insert(0,"_");
						out << "= " << var << ", "<< exp << endl;
					}
				}
			}
			| IF bool_exp THEN ststatement{
											stringstream temp;
											temp << "L" << l_labels.size(); 
											l_labels.push_back(temp.str() );
											out << ":= " << temp.str() <<endl;
										  } 
										  optionalelse ENDIF { 
				out <<": " << l_labels[l_labels.size() -2] <<endl;
				out << ": " << l_labels[l_labels.size() -1] <<endl; 
			}
			| WHILE bool_exp BEGINLOOP ststatement ENDLOOP { }
			| DO BEGINLOOP ststatement ENDLOOP WHILE bool_exp { }
			| READ{readst = true; } Vars { readst = false;} 
			| WRITE{writest = true; } Vars { readst = false;} 
			| CONTINUE {    }
			;			
Vars:
			Vars COMMA Var {  
				do_readwrite($3);
			}
			| Var { 
				do_readwrite($1);
			}
ststatement:
			statement SEMICOLON ststatement { }
			| { }
			;
optionalelse:
			ELSE ststatement { 
				out << ":= " << l_labels[l_labels.size() - 1] <<endl;
				l_labels.pop_back();	
			}
			| { }
			;
bool_exp:
			relation_and_exp relationexplist { 
				if($2 == NULL){
					  stringstream temp3;
					  temp3 << "p" <<p_vars.size();
					  p_vars.push_back(temp3.str() );
					  out << "== " << temp3.str() << ", " << p_vars[p_vars.size() -2] << ", 0" << endl;

					stringstream temp;
					temp << "L" << l_labels.size(); 
					l_labels.push_back(temp.str() );
					
					out << "?:= " << temp.str() << ", " << temp3.str() << endl;

					$$ = $1;
				}
				else{//there are ORs
					orp = true; 
					stringstream temp;
					temp << "p" << p_vars.size(); 
					p_vars.push_back(temp.str() );

					string a = $1, b = $2; 
					if(!check_if_temp(a) )
						a.insert(0,"_");
					if(!check_if_temp(b) )
						b.insert(0,"_");
					out << "|| "<< temp.str() <<", " << a << ", " << b <<endl;

					while(t.size() > 0 ){
						stringstream temp2;
						temp2 << "p" << p_vars.size(); 
						p_vars.push_back(temp2.str() );
						out << "|| "<< temp2.str() <<", "<< p_vars[p_vars.size()-2]<<", " << t[t.size()-1]<< endl;
						t.pop_back();
					}
					strcpy($$, p_vars[p_vars.size()-1].c_str() );
				}
			}
			;
relation_and_exp: 
			relation_exp andlist {  
				if($2 == NULL){
					$$ = $1; 	
				}
				else{//andlist is not null 
					stringstream temp;
					temp << "p" << p_vars.size(); 
					p_vars.push_back(temp.str() );

					string a = $1, b = $2; 
					if(!check_if_temp(a) )
						a.insert(0,"_");
					if(!check_if_temp(b) )
						b.insert(0,"_");
					out << "&& "<< temp.str() <<", " << a << ", " << b <<endl;

					while(t.size() > 0 ){
						stringstream temp2;
						temp2 << "p" << p_vars.size(); 
						p_vars.push_back(temp2.str() );
						out << "&& "<< temp2.str() <<", "<< p_vars[p_vars.size()-2]<<", " << t[t.size()-1]<< endl;
						t.pop_back();
					}
						
					strcpy($$, p_vars[p_vars.size()-1].c_str() );
				}
			}
			;
relationexplist: 
			OR relation_and_exp relationexplist{ 
				$$ = $2; 
				if($3 != NULL)
					t.push_back($3);
			}
			| { $$ = NULL; 	}
			;
andlist:
			AND relation_exp andlist {  
				$$ = $2; 
				if($3 != NULL){
	cout<<"not null return: "<<$3<<endl;

					t.push_back($3);
				}
			}
			| { $$ = NULL; }
			;
relation_exp:
		    NOT	expression comp expression { }
			| NOT TRUE {}
			| NOT FALSE { }
			| NOT L_PAREN bool_exp R_PAREN  { }
			| expression comp expression { 
				stringstream temp;
				temp << "p" << p_vars.size(); 
				p_vars.push_back(temp.str() );

				string a = $1, b = $3; 
				if(!check_if_temp(a) )
					a.insert(0,"_");
				if(!check_if_temp(b) )
					b.insert(0,"_");

				//if array another output is needed 				

				int i = a.find(" ",0);
				if(i != string::npos){//array on rhs 
					stringstream temp2;
					temp2 <<"t" << t_vars.size();
					t_vars.push_back(temp2.str() );
					
					string c, d;
					c = a.substr(0,i);
					d = a.substr(i+1);

					if(!check_if_temp(c) )
						c.insert(0,"_");
					if(!check_if_temp(d) )
						d.insert(0,"_");
					out << "=[] " << temp2.str() << ", " << c<< ", " << d <<endl;
					out << $2 <<" "<< temp.str() <<", " << temp2.str() << ", " << b <<endl;
				  }
				  else{
					out << $2 <<" "<< temp.str() <<", " << a << ", " << b <<endl;
				  }
				  //check for false
	//??????????????????
	/*
				  stringstream temp3;
				  temp3 << "p" <<p_vars.size();
				  p_vars.push_back(temp.str() );
				  out << "== " << temp3.str() << ", " << p_vars[p_vars.size() -2] << ", 0" << endl;
				  strcpy($$, temp3.str().c_str());
				  */

				  strcpy($$, temp.str().c_str());


			}
			| TRUE {}
			| FALSE { }
			| L_PAREN bool_exp R_PAREN  { }
			;
Var:
			IDENT {  
				bool valid = var_in_table($1);
				if(valid && !ident_is_array($1) ){//it is not an array 
					$$ = $1;
				}
				else if(!valid){
					errors << "Variable " << $1 << " does not exist" <<endl;
				}
				else{ //is an array 
					errors << "Variable " << $1 << " is being accessed as the wrong type" <<endl;
				}
			}
			| IDENT L_PAREN expression R_PAREN { 
				bool valid = var_in_table($1);
				if(ident_is_array($1) && valid){//it is an array 
				string a; 
				a.append($1);
				a.append(" ");
				a.append($3);
				strcpy($$,a.c_str() );
				}
				else if(!valid){
					errors << "Variable " << $1 << " does not exist" <<endl;
				}
				else{ //is not an array 
					errors << "Variable " << $1 << " is being accessed as the wrong type" <<endl;
				}
			}
			;
expression:
			multiplicative_exp exprlist {  
				if($2 == NULL){
					$$ = $1;
				}
				else{//there is an exprlist so add or sub 
					string a = $1, b = $2; 
					if(!check_if_temp(a) )
						a.insert(0, "_");
					if(!check_if_temp(b) )
						b.insert(0,"_");

					stringstream temp;
					temp << "t" << t_vars.size(); 
					t_vars.push_back(temp.str() );
					if(add){
						out << "+ " << temp.str() << ", " << a << ", "<<b <<endl;
					}
					else if(sub){
						out << "- " << temp.str() << ", " << a << ", "<<b <<endl;
					}
					strcpy($$, t_vars[t_vars.size()-1].c_str() );
				}
				add = sub = false; 
			}
			;
multiplicative_exp:
			term terms {  
				if($2 == NULL){
					$$ = $1; 
				}
				else{ //there's a mult div or mod
					string a = $1, b = $2; 
					if(!check_if_temp(a) )
						a.insert(0, "_");
					if(!check_if_temp(b) )
						b.insert(0,"_");


					stringstream temp;
					temp << "t" << t_vars.size(); 
					t_vars.push_back(temp.str() );
					if(mult){
						out << "* " << temp.str() << ", " << a << ", "<<b <<endl;
					}
					else if(divide){
						out << "/ " << temp.str() << ", " << a << ", "<<b <<endl;
					}
					else if(mod){
						out << "% " << temp.str() << ", " << a << ", "<<b <<endl;
					}
					strcpy($$, t_vars[t_vars.size()-1].c_str() );
					
				}
				mult = divide = mod = false; 
			}
			;
term:
			Var { $$ = $1; }
			| NUMBER { $$ = $1; }
			| L_PAREN expression R_PAREN { $$ = $2; }
			| SUB Var { }
			| SUB NUMBER { }
			| SUB L_PAREN expression R_PAREN { } 
			;
terms:
			{ $$ = NULL; }
			| terms MULT term {  
				$$ = $3;
				mult = true; 	
			}
			| terms DIV term { 
				$$ = $3;
				divide = true; 	
			}
			| terms MOD term { 
				$$ = $3;
				mod = true; 
			}
			;
exprlist:
			ADD multiplicative_exp exprlist  {
				add = true;
				$$ = $2;
			}
			| SUB multiplicative_exp exprlist { 
				sub = true; 
				$$ = $2;
			}
			| { $$ = NULL; }
			;
comp:
			EQ { $$ = "=="; }
			| NEQ { $$ = "!=";}
			| LT { $$ = "<";}
			| GT { $$ = ">"; }
			| LTE { $$ = "<=";}
			| GTE { $$ = ">=";}
			;
%%


int main(int argc, char **argv){
	
   yyparse();
   
   if(!errors.str().empty()){ //if errors were encountered, output them and exit
	   cout<<"Errors encountered: " << errors.str()<<endl;
	   return 0;
   }
   
   

   for(int i=0; i<sym_table.size(); i++){
	   if(sym_table[i].type == 0)
		   cout << ". _"<< sym_table[i].name<<endl;
		else if(sym_table[i].type == 1)
			cout << ".[] _" << sym_table[i].name <<", " << sym_table[i].a_size<<endl;
	}
   
   cout<<endl;
   cout<<out.str() <<endl;
   
   return 0;
}


void yyerror(const char *msg) {
}
bool var_in_table(string val){
	if(val == filename){
		return true;
	}
	for(int i=0; i<sym_table.size(); i++){
		if(sym_table[i].name == val){
			return true; 
		}
	}
	return false; 
}
bool arr_valid_size(int val){
	if(val > 0 ){
		return true;
	}
	errors << "Variable " << val << " has an invalid array size" <<endl;
	return false;
}
 bool ident_is_array(string val){
	 for(int i=0; i<sym_table.size(); i++){
		 if(sym_table[i].name == val){
			 if(sym_table[i].type == 1){
				 return true;
			 }
			 else{
				 return false;
			 }
		 }
	 }
	 return false; 
 }
 int sym_type(string val){
	 for(int i=0; i<sym_table.size(); i++){
		 if(sym_table[i].name == val){
			 return sym_table[i].type; 
		 }
	 }
	 return -1;
 }
 void do_readwrite(string curr){
	if(readst){
		if(sym_type(curr) == 0 ) {//its an int
			out << ".< _" << curr <<endl; 
		}
		else{//its an array read 
			int i = curr.find(" ",0);
			string a, b;
			a = curr.substr(0,i);
			b = curr.substr(i+1);
			
			if(!check_if_temp(b) )
				b.insert(0,"_");

			out << ".[]< _" << a << ", " << b <<endl;
		}
	}
	else if(writest){
		if(sym_type(curr) == 0){
		out << ".> _" << curr <<endl;
		}
		else{//its an array write 
			int i = curr.find(" ",0);
			string a, b;
			a = curr.substr(0,i);
			b = curr.substr(i+1);

			if(!check_if_temp(b) )
				b.insert(0,"_");
			out << ".[]> _" << a << ", " << b <<endl;
		}
	}
 }
 bool check_if_temp(string val){
	 size_t num = val.find_first_of("0123456789", 0); 
	 if((val[0] == 't' && num == 1) || val[0] == '_' || (num == 0) ||  (val[0] == 'p' && num == 1) ){
		 return true;
	 }
	 return false; 
 }

