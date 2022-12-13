#include "main.h"

/**
  * _isalpha - print lowercase numbers or uppercase
  *@c: variable to check if lower or uppercase
  * Return: 0  for lowercase and 1 for otherwise
  */
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else 
		return (0);
}
