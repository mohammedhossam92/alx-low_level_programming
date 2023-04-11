#include "main.h"
/**
 *create_array - function
 *@size: size of array
 *@c: character to initialize
 *Return: return i
*/

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);
	while (size--)
		i[size] = c;
	return (i);
}
