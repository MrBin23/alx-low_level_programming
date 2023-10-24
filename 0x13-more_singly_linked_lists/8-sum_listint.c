#include "lists.h"
/**
 * sum_listint - calculates totall of all data in listint_T
 * @head: first node
 * Return: total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total = total + temp->n;
		temp = temp->next;
	}

	return (total);
}
