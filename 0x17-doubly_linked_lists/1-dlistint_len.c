#include "lists.h"

/**
 * dlistint_len - returns e' number of elements
 * in a dllsit.
 *
 * @h: head of the list
 * Return: e' number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_count;

	n_count = 0;

	if (!h)
		return (n_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		n_count++;
		h = h->next;
	}

	return (n_count);
}
