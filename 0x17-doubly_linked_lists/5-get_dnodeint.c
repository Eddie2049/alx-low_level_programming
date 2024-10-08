#include "lists.h"

/**
 * get_dnodeint_at_index - function returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

    /* check if node is head.*/
	while (head->prev != NULL)
		head = head->prev;

	i = 0;

    /* iterate thro' list*/
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
