#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: param.
 * Return: size_t no. of nodes
*/

size_t print_list(const list_t *h)
{
	size_t len_nodes;

	len_nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		len_nodes++;
	}
	return (len_nodes);
}
