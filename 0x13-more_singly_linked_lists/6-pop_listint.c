#include "lists.h"

/**
 * pop_listint - entry. pops the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	curr = (*head)->next;
	free(*head);
	*head = curr;

	return (data);
}
