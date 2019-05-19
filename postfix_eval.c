#include "main.h"

void postfix_eval(char *postfix)
{
	float stack[20];
	float sum = 0;
	int top = -1;
	while (*postfix)
	{
		/*if (operator_valid(postfix) == success)
		  {
		  printf("res///: %f\n", stack[top]);
		  printf("res/////: %f\n", stack[top-1]);
		  printf("operator: %c\n", *postfix);
		  stack[top] = evaluation(stack[top--],stack[top],*postfix);
		  printf("res: %f\n", stack[top]);
		  }*/
		if (operator_valid(postfix) == failure)
		{
			while(*postfix != ',' && (operator_valid(postfix) == failure) )
			{
				sum = (sum*10)+(*postfix - '0');
				postfix++;
			}
			if (sum)
			{
				top++;
				stack[top] = sum;
				sum = 0;
				//printf("nums: %f\n", stack[top]);
			}
		}
		if (operator_valid(postfix) == success)
		{
			//printf("res///: %f\n", stack[top]);
			//printf("res/////: %f\n", stack[top-1]);
			//printf("operator: %c\n", *postfix);
			stack[top-1] = evaluation(stack[top],stack[top-1],*postfix);
			top--;
			//printf("res: %f\n", stack[top]);
		}
		postfix++;
	}
	/*else
	  {
	  float t2 = stack[top--];
	  float t1 = stack[top--];
	  stack[++top] = evaluation(t1, t2, *postfix);
	  }
	  postfix++;*/
	printf("result : %.2f\n", stack[0]);
}

//
float evaluation(float t1, float t2, char operators)
{
	switch(operators)
	{
		case '+':
			return (t1 + t2);
		case '-':
			return (t1-t2);
		case '*':
			return (t1*t2);
		case '/':
			return (t2/t1);
		//case '^':
			//return powf(t1, t2);
	}
}


