#include <stdio.h>
#include "main.h"

/**
  *main - sum of numbers
  *Return: 0
  */
int main(void)
{
	int num, answer = 0;

	for (num = 0; num < 1024; n++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
			answer += num;
	}
	printf("%d\n", answer);
	return (0);
}
