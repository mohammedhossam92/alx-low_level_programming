#include "lists.h"

/**
 *list_len - function to get the length of the linked list
 *@h: pointer to the header node
 *Return: length of the list
*/

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
