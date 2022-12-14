#include <stdio.h>
/**
  *main - prints out first 50
  *Return: return 0
  */
int main(void)
{
	int n;
	unsigned long num1 = 0, num2 = 1, num3;

	for (n = 0; n < 50; n++)
	{
		num3 = num1 + num2;
		printf("%lu", num3);
		num1 = num2;
		num2 = num3;

		if (n == 49)
			printf("\n");
		else
			printf(", ");

	}

	return (0);
}
