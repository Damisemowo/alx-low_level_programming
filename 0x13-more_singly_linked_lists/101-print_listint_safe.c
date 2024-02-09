#include "lists.h"

/**
* find_loop_start - Finds the start of a loop in a linked list
* @head: Pointer to the head of the list
*
* Return: (Pointer to the start of the loop), or (NULL if no loop)
*/

listint_t *find_loop_start(const listint_t *head)
{
	const listint_t *prometheus = head, *odyssey = head;

	while (odyssey && odyssey->next)
	{
		prometheus = prometheus->next;
		odyssey = odyssey->next->next;

		if (prometheus == odyssey)
		{
			prometheus = head;
			while (prometheus != odyssey)
			{
				prometheus = prometheus->next;
				odyssey = odyssey->next;
			}
			return ((listint_t *)prometheus);
		}
	}
	return (NULL);
}

/**
* print_listint_safe - A function that prints a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
*
* Return: (The number of nodes in the list).
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop_start = find_loop_start(head);
	size_t nodes = 0;

	if (loop_start == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		while (head != loop_start)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
