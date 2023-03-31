#include "main.h"
/**
* _strncpy - function that copies a string
*
* @dest: pointer to the destination
* @src: pointer to the source
* @n: number
* Return: return (dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
