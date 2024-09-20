
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h_a, *h_b;
	unsigned int i;

    /* assigning h_a to head node.*/
	h_a = *head;

    /* confirming that h_a is head node. */
	if (h_a != NULL)
		while (h_a->prev != NULL)
			h_a = h_a->prev;

	i = 0;

	while (h_a != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h_a->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h_b->next = h_a->next;

				if (h_a->next != NULL)
					h_a->next->prev = h_b;
			}

			free(h_a);
			return (1);
		}
		h_b = h_a;
		h_a = h_a->next;
		i++;
	}
	return (-1);
}
