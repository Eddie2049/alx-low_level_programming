#include "lists.h"

/**
 * delete_nodeint_at_index - entry. deletes node in a llist at a specific index
 * @head: param 1. pointer to the first element in the list
 * @index: param 2. index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dummy = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dummy);
		return (1);
	}

	while (i < index - 1)
	{
		if (!dummy || !(dummy->next))
			return (-1);
		dummy = dummy->next;
		i++;
	}


	curr = dummy->next;
	dummy->next = curr->next;
	free(curr);
	return (1);
}
