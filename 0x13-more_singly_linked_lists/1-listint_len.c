#include "lists.h"
/**
 * listint_len - return elemets in linked lidt
 * @h: linked list type
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
