#ifndef MAIN_H
#define MAIN_H

#define success 1
#define failure 0

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//prototypes

void infix_postfix(char *infix, char *postfix);

int stack_precedence(char ch);

int infix_precedence(char ch);

int operator_valid(char *infix);

void postfix_eval(char *postfix);

float evaluation(float t1, float t2, char operators);

#endif
