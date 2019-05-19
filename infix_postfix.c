#include "main.h"


void infix_postfix(char *infix, char *postfix)
{
	char stack[20];
	stack[0] = '#';

	int n, top = 0;
	while(*infix)
	{
		if (operator_valid(infix) == failure)
		{
			*postfix = *infix;
			//printf ("%c\n", *postfix);
			*postfix++;
		}
		else
		{
			*postfix++ = ',';
			while( (infix_precedence(*infix)) < (stack_precedence(stack[top])) )
			{
				*postfix++ = stack[top];
				top--;
			}
			if( (infix_precedence(*infix)) > (stack_precedence(stack[top])) )
			{
				top++;
				stack[top] = *infix;
			}	
			else
			{
				top--;
			}
		}
		infix++;
	}

	while(stack[top] != '#')
	{
		*postfix++ = stack[top--];
	}
	*postfix = '\0';	   
	
}
