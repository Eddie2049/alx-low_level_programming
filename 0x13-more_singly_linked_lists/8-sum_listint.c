#include "lists.h"

/**
 * sum_listint - entry. calc the sum of all the data, listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curr;

	sum = 0;
	curr = head;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
