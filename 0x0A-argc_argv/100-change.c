#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
  *main - print minimum number of coins
  *@argv: input
  *@argc: the count
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int sum;
	int count = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]);
	if (sum < 0)
	{
		printf("0\n");
	}
	else
	{
		while (sum)
		{
			if (sum >= coins[0])
				sum -= coins[0];
			else if (sum >= coins[1])
				sum -= coins[1];
			else if (sum >= coins[2])
				sum -= coins[2];
			else if (sum >= coins[3])
				sum -= coins[3];
			else
				sum -= coins[4];
		 count++;
		}
	printf("%d\n", count);
	}
	return (0);
}
