#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_new;
	dlistint_t *h;

	node_new = malloc(sizeof(dlistint_t));
	if (!node_new)
		return (NULL);

	node_new->n = n;
	node_new->prev = NULL;
	h = *head;

	/* check if h  node is head.*/
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	/* create nnode_new as head.*/
	node_new->next = h;

	if (h != NULL)
		h->prev = node_new;

	*head = node_new;

	return (node_new);
}
