#include "main.h"

/**
  *jack_bauer -  print the time of the date according to Jack
  *
  *Return: 0
  */
void jack_bauer(void)
{
	int number_one = 0, number_two;

	while (number_one < 24)
	{
		number_two = 0;

		while (number_two < 60)
		{
			_putchar((number_one / 10) + '0');
			_putchar((number_one % 10) + '0');
			_putchar(':');
			_putchar((number_two / 10) + '0');
			_putchar((number_two % 10) + '0');
			_putchar('\n');
			number_two++;
		}
		number_one++;
	}
}
