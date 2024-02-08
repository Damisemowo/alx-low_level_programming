#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_node = malloc(sizeof(listint_t));
	listint_t *lst_node;

	if (nw_node == NULL)
		return (NULL);

	nw_node->n = n;
	nw_node->next = NULL;

	if (*head == NULL)
	{
		*head = nw_node;
		return (nw_node);
	}

	lst_node = *head;

	while (lst_node->next != NULL)
		lst_node = lst_node->next;

	lst_node->next = nw_node;
	return (nw_node);
}
