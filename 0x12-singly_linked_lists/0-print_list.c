#include "lists.h"
/**
 * print_list - prints all elements in linked list
 * @h: pointer to head of list
 * Return: number of node in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", strlen(h->str), h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
