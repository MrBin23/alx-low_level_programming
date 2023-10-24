#include "lists.h"
/**
 * pop_listint - removes the head node of a linked list
 * @head: points to the first node
 * Return: deleted element or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head || !*head)
		return(0);

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
