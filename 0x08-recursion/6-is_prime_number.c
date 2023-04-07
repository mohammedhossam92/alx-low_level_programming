#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function to check if num is prime
 * @o: int
 * @n: int
 * Return: 0 or 1
*/
int if_prime(int n, int o);

int is_prime_number(int n)
{
	return (if_prime(n, 2));
}

/**
 * if_prime - function to check all numbers < n if they can divided by it
 * @n: int
 * @o: int
 * Return: int
*/
int if_prime(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (if_prime(n, o + 1));
}
