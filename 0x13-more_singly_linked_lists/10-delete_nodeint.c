#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to the first element in the list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *point = *head;
	listint_t *cur = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(point);
		return (1);
	}
	while (x < index - 1)
	{
		if (point == NULL || point->next == NULL)
			return (-1);

		point = point->next;
		x++;
	}
	cur = point->next;
	point->next = cur ? cur->next : NULL;

	if (cur != NULL)
		free(cur);

	return (1);
}
