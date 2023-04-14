#include "main.h"
/**
 * *_memset - function to fill memory with constant byte
 * @s: pointer
 * @b: constant
 * @n: max byte to use
 * Return: s
*/


char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * *_calloc - function
 * @nmemb: aaray len
 * @size: size of e element
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb)

	return (m);
}
