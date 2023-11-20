#include "lists.h"

/**
 * print_listint - entry
 * @h: param
 * Return: size_t count.
*/

size_t print_listint(const listint_t *h)
{
	size_t cnt_;

	cnt_ = 0;
	while (h != NULL)
	{
		cnt_ += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cnt_);
}
