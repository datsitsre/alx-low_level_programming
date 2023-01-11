#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a newly allocated space 
  *@str: the string
  *Return: 0
  */
char *_strdup(char *str)
{
	 char *ptr;
	 int index = 0;

	 

	 ptr = malloc(sizeof(char)  * strlen(str));

	 if (str == NULL)
		 return (NULL);

	 while (*str)
	 {
		ptr[index] = *str;
		str++;
		index++;
	 }
	
	 return (ptr);
	
	 free(ptr);

}
