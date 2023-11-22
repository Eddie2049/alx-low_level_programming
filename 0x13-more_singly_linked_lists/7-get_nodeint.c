#include "lists.h"

/**
 * get_nodeint_at_index - entry. returns node at a certain index
 * @head: param 1. first node in the linked list
 * @index: param 2.index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head;

	while (curr && i < index)
	{
		curr = curr->next;
		++i;
	}
	return (curr ? curr : NULL);
}
