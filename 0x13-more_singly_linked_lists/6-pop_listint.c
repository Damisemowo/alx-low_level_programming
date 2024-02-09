#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int No;
	listint_t *ref;

	if (head == NULL || *head == NULL)
		return (0);

	No = (*head)->n;
	ref = (*head)->next;

	free(*head);
	*head = ref;
	return (No);
}
