#include "main.h"

int operator_valid(char *infix)
{
	switch(*infix)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
		case '(':
		case ')':
					return success;
		default:
					return failure;
	}
}
