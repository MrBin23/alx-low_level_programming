#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of dlistint
 * @index: index of node to search from
 * @head: pointer to head of list
 * Return: Nul
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}
