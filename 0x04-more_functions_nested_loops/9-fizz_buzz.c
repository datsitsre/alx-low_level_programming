#include <stdio.h>
#include "main.h"

/**
  *main - print 1  - 100 then 3 for Fizz 5 bizz 3 and 5 Fizzbuzz
  *Return: 0
  */
int main(void)
{
	int index;

	for (index = 1;  index <= 100; index++)
	{
		if (index % 3 == 0 && index % 5 == 0)
			printf("FizzBuzz ");
		else if (index % 5 == 0)
			printf("Buzz ");
		else if (index % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", index);
	}
	putchar('\n');
	return (0);

}

