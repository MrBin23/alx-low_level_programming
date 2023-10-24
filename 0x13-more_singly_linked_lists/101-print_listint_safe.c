#include "lists.h"
/**
 * looped_listint_len - counts nodes
 * @head: pointer to head
 * Return: 0 or number of unique node
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *back, *front;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	back = head->next;
	front = (head->next)->next;

	while (front)
	{
		if (back == front)
		{
			back = head;

			while (back != front)
			{
				nodes++;
				back = back->next;
				front = front->next;
			}

			back = back->next;

			while (back != front)
			{
				nodes++;
				back = back->next;
			}
			return (nodes);
		}

		back = back->next;
		front = (front->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints listint_t safely
 * @head: pointers to head
 * Return: number pof nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, indx = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (indx = 0; indx < nodes; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("->[%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
