#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* check if head is head? Lol. */
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	/**
	 * condition is.. assugn head to temo
	 * check whether temp is NULL
	 * free temp.. thus list.
	*/
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
