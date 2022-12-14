#include <stdio.h>

/**
  *main - fibonnaci number
  *Return: numbers
  */
int main(void)
{
	int number1;
	unsigned long first_number = 0, second_number = 1, n3;
	unsigned long first_number_h1, first_number_h2, second_number_h1, second_number_h2;
	unsigned long h1, h2;

	for (number1 = 0; number1 < 92; number1++)
	{
		n3 = first_number + second_number;
		printf("%lu, ", n3);
		first_number = second_number;
		second_number = n3;
	}
	first_number_h1 = first_number / 10000000000;
	second_number_h1 = second_number / 10000000000;
	first_number_h2 = first_number % 10000000000;
	second_number_h2 = second_number % 10000000000;
	for (number1 = 93; number1 < 99; number1++)
	{
		h1 = first_number_h1 + second_number_h1;
		h2 = first_number_h2 + second_number_h2;
		if ((first_number_h2 + second_number_h2) > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (number1 != 98)
			printf(", ");

		first_number_h1 = second_number_h1;
		first_number_h2 = second_number_h2;
		second_number_h1 = h1;
		second_number_h2 = h2;
}
	printf("\n");
	return (0);
}
}
