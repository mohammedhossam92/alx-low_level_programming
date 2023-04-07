#include "main.h"
/**
 * factorial - function to find the factorial of a numer
 * @n: number
 * Return: the factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
