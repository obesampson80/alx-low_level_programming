#include "lists.h"

/**
* print_list - Prints all the elements of a linked list.
* @head: Pointer to the head of the linked list
* Return: Number of nodes in the list
*/
size_t print_list(const list_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		printf("%s\n", head->str);
		node_count++;
		head = head->next;
	}
	return (node_count);
}
