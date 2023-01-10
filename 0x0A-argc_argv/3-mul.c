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
	
	int index;
	int num_1 ; 
	int result = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else 
	{
		for (index = 1; index < argc; index++)
		{
			num_1 = strtol(argv[index], NULL, 10) ;
			result = result * num_1;
		}

		printf("%d\n", result);
	}

	return (0);
}
