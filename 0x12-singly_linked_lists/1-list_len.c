#include "lists.h"
/**
 * print_len-function to print no of node
 * @h:pointer
 * Return:i
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}
