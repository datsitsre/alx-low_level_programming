#include <stdio.h>

/**
  *main - add somthing
  *Return: 0
  */

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n; /* * - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
	 */
*(p + 2) = 98;/*
* - you are not allowed to code anything else than this line of code
*/
;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
