#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int number = 0;

	while (number < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		number++;
	}
}
