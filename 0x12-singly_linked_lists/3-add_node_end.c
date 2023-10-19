#include "lists.h"
/**
 * add_node_end - adds new node at end of linked list
 * @head: double pointer to head of list
 * @str: string to be stored in the new node
 * Return: head pointer to list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t ncha;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (ncha = 0; str[ncha]; ncha++)
		;

	new_node->len = ncha;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
