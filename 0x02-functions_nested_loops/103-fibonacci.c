#include <stdio.h>

/**
  *main - sum of evern numbers and print
  *Return: 0
  */
int main(void)
{
	unsigned long first_numbe = 0, second_numbe = 1, third_number = 0, result = 0;

	while (third_number <= 4000000)
	{
		third_number = first_numbe + second_numbe;
		first_numbe = second_numbe;
		second_numbe = third_number;

		if ((first_numbe % 2) == 0)
			result += first_numbe;

	}
	printf("%ld\n", result);
	return (0);
}
