#include "main.h"

/**
  *_isdigit - check if a number is a digit
  *@c : input varaible
  *Return: 1 if digit else 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
