#include "lists.h"

/**
 * sum_dlistint - function returns the sum of all the data (n)
 * of a dllist & or returns 0 if list is empty.
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum;

	sum = 0;

	if (head != NULL)
	{
		/* geting to head. */
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
