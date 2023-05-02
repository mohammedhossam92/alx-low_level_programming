#include "lists.h"
/**
*free_listint - function to free the list of ints
*@head: refers to the head of the list
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
