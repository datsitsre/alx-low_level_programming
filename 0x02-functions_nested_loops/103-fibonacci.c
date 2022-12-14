#include <stdio.h>

/**
  *main - sum of evern numbers and print
  *Return: 0
  */
int main(void)
{
	unsigned long frist_numbe = 0, second_numbe = 1, third_number = 0, result = 0;

	while (third_number <= 4000000)
	{
		third_number = first_number + second_number;
		first_number = second_number;
		second_number = third_number;

		if ((first_number % 2) == 0)
			sum += n1;

	}
	printf("%ld\n", result);
	return (0);
}
