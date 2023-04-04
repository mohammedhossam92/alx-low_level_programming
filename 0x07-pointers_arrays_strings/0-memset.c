#include "main.h"
/**
 * _memset - function that fills block memory with specefic value
 *
 * @s: pointer
 * @b: cons
 * @n: maximum bytes to use
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	retrun(s);
}
