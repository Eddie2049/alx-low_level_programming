#include "lists.h"

/**
 * listint_len - entry
 * @h: param
 * Return: size_t count.
*/

size_t listint_len(const listint_t *h)
{
	size_t cnt_;

	cnt_ = 0;
	while (h != NULL)
	{
		cnt_ += 1;
		h = h->next;
	}
	return (cnt_);
}
