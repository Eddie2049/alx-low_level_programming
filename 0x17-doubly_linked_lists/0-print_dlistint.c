#include "lists.h"

/**
 * print_dlistint - function prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_count;

	n_count = 0;
	if (!h)
		return (n_count);

	/* check whether h is head of list.*/
	while (h->prev != NULL)
		h = h->prev;

	/* traverse e' list.*/
	while (h != NULL)
	{
		/* print e' current node's value*/
		printf("%d\n", h->n);
		/* increase e' node count*/
		n_count++;
		/* move to the next node*/
		h = h->next;
	}

	return (n_count);
}
