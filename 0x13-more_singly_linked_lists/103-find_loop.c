#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: the address of the node where the
 * loop starts, or NULL if there is no
 * loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s_ptr = head, *f_ptr = head;

	while (f_ptr != NULL)
	{
		s_ptr = s_ptr->next;
		f_ptr = f_ptr->next->next;
		if (s_ptr == f_ptr)
		{
			s_ptr = head;
			while (s_ptr != f_ptr)
			{
				s_ptr = s_ptr->next;
				f_ptr = f_ptr->next;
			}
			return (s_ptr);
		}
	}
	return (NULL);
}
