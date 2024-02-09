#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list.
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t no_of_elmnts = 0;
	int diff_in_mem_add;
	listint_t *point;

	if (!h || !*h)
		return (0);

	for (; *h != NULL; no_of_elmnts++)
	{
		diff_in_mem_add = *h - (*h)->next;
		if (diff_in_mem_add > 0)
		{
			point = (*h)->next;
			free(*h);
			*h = point;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (no_of_elmnts);
}
