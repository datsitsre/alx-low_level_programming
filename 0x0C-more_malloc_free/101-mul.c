#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *main - multiple two numbers
  *@argc: count argc
  *@argv: number of argument
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int index_1, index_2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (index_1 = 1; index_1 < argc; index_1++)
	{
		for (index_2 = 0; argv[index_1][index_2] < '\0'; index_2++)
		{
			if (argv[index_1][index_2] > 57 || argv[index_1][index_2] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	result = atol(argv[2]) * atol(argv[1]);
	printf("%d\n", result);

	return (0);

}
