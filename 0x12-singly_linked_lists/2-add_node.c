#include "lists.h"
/**
 * add_node - adds nodse at the start
 * @head: head of linked list
 * @str: string to be stored
 * Return: address of head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t ncha;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (ncha = 0; str[ncha]; ncha++)
		;

	new_node->len = ncha;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
