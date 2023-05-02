#include "lists.h"

/**
*delete_nodeint_at_index - function to delete nodes
*@head: pointer to the header
*@index: indx of the nod
*Return: 1 success and -1 for fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*declaration*/
	listint_t *node;
	listint_t *pre_node;
	unsigned int i = 0;

	/*code start*/
	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;

	while (node)
	{
		if (i == index)
		{
			pre_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		pre_node = node;
		node = node->next;
	}
	return (-1);
}
