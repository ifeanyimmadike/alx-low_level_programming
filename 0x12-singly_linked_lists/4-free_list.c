#include "lists.h"
/**
 * free_list - free up memory
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp_free;

	while (head)
	{
	temp_free = head->next;
	free(head->str);
	free(head);
	head = temp_free;
	}
}

