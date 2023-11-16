#include "lists.h"

/**
 * free_list - entry.frees a linked list
 * @head: param. list_t list to be freed
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *dummy;

	while (head != NULL)
	{
		dummy = head->next;
		free(head->str);
		free(head);
		head = dummy;
	}
}
