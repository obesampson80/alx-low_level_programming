#include "lists.h"

/**
* print_list - Prints all the elements of a linked list.
* @h: Pointer to the h of the linked list
* Return: Number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%s\n", h->x);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
