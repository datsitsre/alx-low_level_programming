#include "main.h"

int prime_num(int i, int num);

/**
  *prime_num - check the prime
  *@i: integer
  *@num: second number
  *Return: 0
  */

int prime_num(int i, int num)
{
	if (num == 1)
	{
		return (1);
	}
	if (i % num == 0)
	{
		return (0);
	}

	return (prime_num(i, num - 1));
}

/**
  *is_prime_number -  check prime number
  *@n: the number
  *Return: 0
  */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}

	return (prime_num(n, n - 1));
}
