#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: pointer to the first node in the list
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv_node = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prv_node;
		prv_node = *head;
		*head = next;
	}

	if (prv_node != NULL)
		*head = prv_node;

	return (*head);
}
