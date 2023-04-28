#include "lists.h"

/**
 *_strlen - function to get the length of a string
 *@s: pointer to the string to be checked
 *
 *Return: the length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (*s++)
		len++;
	return (len);
}

/**
 *print_list - print linked list
 *@h: pointer to header node
 *
 * Return: size of the list
*/

size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		z++;
	}
	return (z);
}
