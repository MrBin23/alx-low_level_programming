#include "lists.h"
/**
 * get_nodeint_at_index - returns node of an index
 * @head: first node
 * @index: node to return
 * Return: null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && 1 < index)
	{
		temp = temp->next;
		j++;
	}

	if (temp)
		return (temp);
	else
		return (NULL);
}
