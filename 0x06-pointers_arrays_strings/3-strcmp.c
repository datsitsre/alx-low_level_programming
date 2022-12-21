#include "main.h"

/**
  *_strcmp - compares two strings
  *@s1: first string
  *@s2: second string
  *Return: value
  */
int _strcmp(char *s1, char *s2)
{
	int len;
	int result;

	for (len = 0; s1[len] != '\0' || s2[len] != '\0'; len++)
	{
		if (s1[len] < s2[len])
		{
			result = 15;
		}
		else if (s1[len] > s2[len])
		{
			result = -15;
		}
		else
			result = 0;
	}
	return (result);

}

