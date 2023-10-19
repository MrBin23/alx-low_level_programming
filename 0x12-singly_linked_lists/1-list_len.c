#include "lists.h"
/**
 * list_len - returns number of element in a list
 * @h: pointer to head list
 * Return: number of node in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
