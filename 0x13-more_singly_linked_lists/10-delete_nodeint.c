#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *tmp = *head;
	listint_t *cur = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (x = 0; i < index - 1; x++)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
	}

	cur = tmp->next;
	tmp->next = cur->next;
	free(cur);

	return (1);
}
