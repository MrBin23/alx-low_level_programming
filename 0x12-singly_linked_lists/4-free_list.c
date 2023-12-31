#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of link list
 */
void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
