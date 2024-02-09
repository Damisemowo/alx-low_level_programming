#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list.
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *point = head;

	while (point != NULL && x < index)
	{
		point = point->next;
		x++;
	}
	if (point != NULL)
	{
		return (point);
	}
	else
	{
		return (NULL);
	}
}
