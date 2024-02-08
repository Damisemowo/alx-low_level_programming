#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: linked list of the type listint_t to be printed.
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
        size_t num_of_nodes = 0;

        while (h != NULL && ++num_of_nodes)
        {
                printf("%d\n", h->n);
                h = h->next;
        }
        return (num_of_nodes);
}
