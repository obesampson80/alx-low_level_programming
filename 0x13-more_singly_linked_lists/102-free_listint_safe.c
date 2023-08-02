#include "lists.h"

/**
 * loop_listint_length - calculates the length of a loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the loop, or 0 if there is no loop
 */
size_t loop_listint_length(const listint_t *head)
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
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of the list
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t len, i;

	len = loop_listint_length(*h);

	if (len == 0)
	{
		for (i = 0; *h != NULL; i++)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
		*h = NULL;
	}

	h = NULL;

	return (i);
}

