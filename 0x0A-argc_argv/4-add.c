#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


/**
  *main - print the positive num
  *@argv: input
  *@argc: count argument
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int result =  0;
	int index;
	int index2;

	for (index = 1; index < argc; index++)
	{
		for (index2 = 0; argv[index][index2] ; index2++)
		{
			if (!(isdigit(argv[index][index2])))
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + strtol(argv[index], NULL, 10);
	}

	printf("%d\n", result);
	return (0);
}


