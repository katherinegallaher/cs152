/* Group Members: Katherine Gallaher (861100447), Julia Perez (861030684) */

%{
 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 FILE * yyin;
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
%token <numberToken> NUMBER 
%left OR AND SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE
%nonassoc IF_PREC ELSE_PREC

%% 
prog_start:
			|
			PROGRAM IDENT SEMICOLON block END_PROGRAM {printf( "program_start -> program identifier semicolon block end_program\n"); } 
			;
block: 
			|
			


%%

int main(int argc, char **argv){
	if(argc >= 2)
	{
		yyin = fopen(argv[1], "r");
		if(yyin == NULL)
		{
			yyin = stdin;
		}
   }
   else
   {
      yyin = stdin;
   }
   yyparse();
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}
