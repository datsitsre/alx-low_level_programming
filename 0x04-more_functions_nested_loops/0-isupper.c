#include "main.h"

/**
  *_isupper - check for upper case letters
  *@c : variable argument
  *Return: 0 if true or 0 if false
  */
int _isupper(int c)
{
	if (c >= 'A' && c < 'Z')
	{
		return (1);
	}
	else
		return (0);
}