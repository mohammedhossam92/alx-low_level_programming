#include "main.h"
/**
 *_memcpy - function cpy block of memory from location to another
 * @src:memory
 * @dest:memory dest
 * @n:length to be copied
 *Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
