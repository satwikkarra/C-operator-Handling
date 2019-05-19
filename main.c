#include "main.h"

int main()
{
	//initialize the variables
	char infix[20], postfix[20],ch;

	do
	{
	//prompt the user to enter the expression
	printf("enter the expession\n");
	scanf("%s", infix);

	infix_postfix(infix, postfix);

	printf("postfix: ");

	printf("%s\n", postfix);
	
	postfix_eval(postfix);

	printf ("Do u want to continue(y/n): ");
	scanf ("\n%c", &ch);
	}while (ch == 'y');
}
