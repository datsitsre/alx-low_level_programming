#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
  *main - multiplies two numbers
  *@argv: input on cmmd line
  *@argc: number of argument
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int num_1;
	int num_2;
	int result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = strtol(argv[1], NULL, 10);
	num_2 = strtol(argv[2], NULL, 10);
	result = num_2 * num_1;

	printf("%d\n", result);

	return (0);

}
