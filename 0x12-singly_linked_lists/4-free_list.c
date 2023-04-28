#include "lists.h"

/**
 *free_list - function to free all nodes
 *@head: pointer to the head
 *
 *Return: void
*/

void free_list(list_t *head)
{
	list_t *node;
	list_t *next_node;

	if (!head)
		return;

	node = head;

	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
