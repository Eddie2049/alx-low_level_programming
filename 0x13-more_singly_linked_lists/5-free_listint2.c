#include "lists.h"

/**
 * free_listint2 - entry. frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}
	*head = NULL;
}
