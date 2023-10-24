#include "lists.h"
/**
 * find_listint_loop - finds looop in linked list
 * @head: head of linked list
 * Return: address of node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev2;
	listint_t *prev;

	prev2 = head;
	prev = head;

	while (head && prev2 && prev2->next)
	{
		head = head->next;
		prev2 = prev2->next->next;

		if (head == prev2)
		{
			head = prev;
			prev = prev2;

			while (1)
			{
				prev2 = prev;
				while (prev2->next != head && prev2->next != prev)
				{
					prev2 = prev2->next;
				}
				if (prev2->next == head)
					break;

				head = head->next;
			}
			return (prev2->next);
		}
	}

	return (NULL);
}
