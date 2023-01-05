#include "main.h"

/**
   *_memset - fill memory with a constant byte
   *@s: the buffer
   *@b: the memeory
   *@n: the number of bytes
   *Return: 0
   */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
		s[num] = b;

	return (s);
}
