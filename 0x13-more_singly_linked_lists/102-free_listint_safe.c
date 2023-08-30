#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int minus;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		minus = *h - (*h)->next;
		if (minus > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			continue;
		}
	}

	*h = NULL;

	return (len);
}











