#include "lists.h"

/**
* sum_listint - funtion to sum
*@head: pointer to the head
*Return: int
*/

int sum_listint(listint_t *head)
{
	/* var declarations*/
	int sum = 0;

	/*sum cal*/
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
