#include "main.h"

/**
 * print_alphabet - print letters in lowerca
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
