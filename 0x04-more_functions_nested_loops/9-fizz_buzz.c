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
		if (index % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (index % 5 == 0)
		{
			printf("Buzz ");
			printf(" ");
		}
		else if (index % 3 == 0)
		{
			printf("Fizz ");
			printf(" ");
		}
		else
		{
			printf("%d ", index);
			printf(" ");
		}
	}
	putchar('\n');
	return (0);

}

