#include "lists.h"
/**
 * print_dlistint - prints all element of dlist int
 * @h: head of ist
 * @dlistint_t list
 * Return: node numeber
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NUL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
