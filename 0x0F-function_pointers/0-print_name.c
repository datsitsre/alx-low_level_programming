#include "function_pointers.h"
#include <stdlib.h>


/**
  *print_name - prinT your name
  *@name: input name
  *@f: function
  *Return: nothing
  */
void print_name(char *name,void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
