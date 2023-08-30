#include "lists.h"

/**
 * sum_listint - calculates the addition of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting total
 */
int sum_listint(listint_t *head)
{
        int add = 0;
        listint_t *temp = head;

        while (temp)
        {
                add += temp->n;
                temp = temp->next;
        }

        return (add);
}
