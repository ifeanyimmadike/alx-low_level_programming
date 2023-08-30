#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: pointer to transverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		h = h->next;
		nm++;
	}

	return (nm);
}
















