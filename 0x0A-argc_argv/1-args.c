#include <stdio.h>

/**
  *main - print the number of argument
  *@argc: the count argc
  *@argv: the argument
  *Return:0
  */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);

}

