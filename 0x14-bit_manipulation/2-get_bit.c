#include "main.h"


/**
  *get_bit - return the value of a bit
  *@index:  index place
  *@n: the number
  *Return: index or -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
