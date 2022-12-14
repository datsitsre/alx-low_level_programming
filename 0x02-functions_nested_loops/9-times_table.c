#include "main.h"

/**
  *times_table - print 9 times table
  *Return: 0
  */
void times_table(void)
{
	int num_run, multip1,  answer;

	for (num_run = 0; num_run < 10; num_run++)
	{
		for (multip1 = 0; multip1 < 10; multip1++)
		{
			answer = multip1 * num_run;
			if (multip1 == 0)
			{
				_putchar(answer + '0');
			}
			if (answer < 10 && multip1 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(answer + '0');
			}
			else if (answer >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((answer / 10) + '0');
				_putchar((answer % 10) + '0');
			}
		}
		_putchar('\n');
		}
}


