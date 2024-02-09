#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
