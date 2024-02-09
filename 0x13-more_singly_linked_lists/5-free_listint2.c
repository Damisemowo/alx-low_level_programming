#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: pointer to the listint_t list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *cur;
	listint_t *next;

	if (!head || !*head)
		return;

	cur = *head;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}

	*head = NULL;
}
