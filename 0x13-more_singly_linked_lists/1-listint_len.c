#include "lists.h"

/**
 * listint_len - A function that returns the number
 * of elements in a linked listint_t list.
 * @h: linked list of type listint_t to traverse
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		no_of_nodes++;
		h = h->next;
	}
	return (no_of_nodes);
}
