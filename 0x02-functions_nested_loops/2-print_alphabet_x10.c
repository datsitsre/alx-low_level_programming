#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char letter = 'a';

	for (int number = 10; number <= 10; number++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
