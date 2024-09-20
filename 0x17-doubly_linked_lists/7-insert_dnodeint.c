#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node_new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the node_new node
 * @n: value of the node_new node
 * Return: the address of the node_new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_new;
	dlistint_t *head;
	unsigned int i;

	/* have our new ptr point to NULL*/
	node_new = NULL;
	if (idx == 0)
		node_new = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			/* aking sure that head is head of list.*/
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				/* if the head node is the tail.*/
				if (head->next == NULL)
					node_new = add_dnodeint_end(h, n);
				else
				{
					node_new = malloc(sizeof(dlistint_t));
					if (node_new != NULL)
					{
						node_new->n = n;
						node_new->next = head->next;
						node_new->prev = head;
						head->next->prev = node_new;
						head->next = node_new;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (node_new);
}
