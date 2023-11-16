#include "lists.h"

/**
 * add_node_end - entry
 * @head: param 1
 * @str: param 2
 * Return: adress of new element(success) or NULL(fail)
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elem, *dummy;
	unsigned int i, len_str = 0;

	new_elem = malloc(sizeof(list_t));
	if (new_elem == NULL)
		return (NULL);

	new_elem->str = strdup(str);
	for (i = 0; str[i] != '\0'; ++i)
		++len_str;

	new_elem->len = len_str;
	new_elem->next = NULL;
	dummy = *head;

	if (dummy == NULL)
		*head = new_elem;
	else
	{
		while (dummy->next != NULL)
			dummy = dummy->next;
		dummy->next = new_elem;
	}
	return (*head);
}
