#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new
 * node at a given position.
 * @head: pointer to the first node in the list
 * @idx: the index of the list where the new node should be added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *new_node;
	listint_t *point = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (y = 0; point != NULL && y < idx - 1; y++)
		point = point->next;

	if (point == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = point->next;
	point->next = new_node;
	return (new_node);
}
