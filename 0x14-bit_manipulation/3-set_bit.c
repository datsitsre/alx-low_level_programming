#include "main.h"


/**
  *set_bit - set the value of a bit
  *@n: number
  *@index: index number
  *Return:0 or -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);

}
