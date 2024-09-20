#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_new;
	dlistint_t *h;

	node_new = malloc(sizeof(dlistint_t));
	if (!node_new)
		return (NULL);

	node_new->n = n;
	node_new->next = NULL;
	h = *head;

	/* check if h  node is head.*/
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;

		h->next = node_new;
	}
	else
	{
		/* here list is empty.*/
		*head = node_new;
	}

	/* create nnode_new as tail.*/
	node_new->prev = h;

	return (node_new);
}
