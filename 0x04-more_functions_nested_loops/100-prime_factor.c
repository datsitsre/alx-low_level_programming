#include <stdio.h>
#include "main.h"
/**
  *main - print the largest primt factor
  *Return: 0
  */
int main(void)
{
	long int number =  612852475143;
	long int div = 2;
	int answer = 0;
	long int maxFact;

	while (number != 0)
	{
		if (number % div != 0)
			div = div + 1;
		else
		{
			maxFact = number;
			number = number / div;
			if (number == 1)
			{
				printf("%ld is the largest prime factor !", maxFact);
				answer += 1;
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
