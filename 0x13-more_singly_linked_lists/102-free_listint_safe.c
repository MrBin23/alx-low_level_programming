#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: points the first node
 * Return: number of freed element
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int minus;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		minus = *h - (*h)->next;

		if (minus > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;

	return (length);
}
