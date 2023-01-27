#include <stdio.h>

void print_function(void) __attribute__ ((constructor));

/**
  *print_function - print a string before main
  *Return:0
  */
void print_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
