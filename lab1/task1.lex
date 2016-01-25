
DIGIT [0-9]

%%
"+"		{printf("Addition");}
"-"		{printf("Subtraction");}
"/"		{printf("Division");}
"*"		{printf("Multiplication");}
"="		{printf("Equal");}

[ \t]+
"\n"

\.{DIGIT}


.
%%

int main(int argc, char **argv){

}
