#include "main.h"

/**
  *_strspn - get length of a prefix substring 
  *@s : strinv
  *@accept: string to accpet
  *Return: lenght 
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char * ptr_accept = accpet ;

	while(*s)
	{
		while (*accpet)
		{
			if (*(s - 1) == *(accept - 1))
			{
				count++;
				break;
			}
		if (!(*--accept))
			break;
		accept = ptr_accept;
		}
		return (count);	
	}
}


