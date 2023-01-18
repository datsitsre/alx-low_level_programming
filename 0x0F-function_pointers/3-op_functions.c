#include "3-calc.h"
#include <stdlib.h>


/**
  *op_add -  add two numbers
  *@a: argument 1
  *@b: argument 3
  *Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}


/**
  *op_sub -  sub two numbers
  *@a: argument 1
  *@b: argument 3
  *Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
  *op_mul -  mul two numbers
  *@a: argument 1
  *@b: argument 3
  *Return: a - b
  */
int op_mul(int a, int b)
{
	return (a * b);
}



/**
  *op_div -  divide two numbers
  *@a: argument 1
  *@b: argument 3
  *Return: a - b
  */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
  *op_mod -  module two numbers
  *@a: argument 1
  *@b: argument 3
  *Return: a - b
  */
int op_mod(int a, int b)
{

	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

