#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_length - calculates the len of a loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the loop, or 0 if there is no loop
 */
size_t looped_listint_length(const listint_t *head)
{
	const listint_t *s_ptr, *f_ptr;
	size_t len = 1;

	/* If the list is empty or has only one node, there is no loop */
	if (head == NULL || head->next == NULL)
		return (0);

	s_ptr = head->next;  /* tortoise pointer */
	f_ptr = head->next->next;  /* hare pointer */

	/* Floyd's cycle-finding algorithm */
	while (f_ptr != NULL)
	{
		if (s_ptr == f_ptr)
		{
			s_ptr = head;
			while (s_ptr != f_ptr)
			{
				len++;
				s_ptr = s_ptr->next;
				f_ptr = f_ptr->next;
			}

			s_ptr = s_ptr->next;
			while (s_ptr != f_ptr)
			{
				len++;
				s_ptr = s_ptr->next;
			}

			return (len);
		}

		s_ptr = s_ptr->next;
		f_ptr = f_ptr->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len, i;

	len = looped_listint_length(head);

	if (!len)
	{
		for (; head != NULL; len++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
	}
	else
	{
		for (i = 0; i < len; i++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
		printf("-> [%p] %d\n", (void *) head, head->n);
	}

	return (len);
}

