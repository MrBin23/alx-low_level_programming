#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: points to first node
 * @index: index of node to delete
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curr = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
		j++;
	}

	curr = temp->next;
	temp->next = curr->next;
	free(curr);

	return (1);
}
