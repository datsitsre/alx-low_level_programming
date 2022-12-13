#include "main.h"

/**
  * _islower - print lowercase numbers
  *@c: variable to chec
  * Return: 0  for lowercase and 1 for otherwise
  */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
