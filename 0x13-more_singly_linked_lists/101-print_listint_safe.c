#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of linked list
 */
void free_list(list_t **head)
{
	list_t *temp;
	list_t *current;

	if (head != NULL)
	{
		current = *head;

		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prinyts a linke dlidt
 * @head: linked list head node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	list_t *pont, *new_node, *sum;

	pont = NULL;

	while (head != NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = pont;

		sum = pont;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&pont);
				return (nodes);
			}
		}

		printf(" [%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free_list(&pont);
	return (nodes);
}
