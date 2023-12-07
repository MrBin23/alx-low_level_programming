#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - doubly linked list
 * @i: int
 * @prev: points to previous node
 * @next: points to next node
 */
typedef struct listint_s
{
	int i;

	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

size_t print_dlistint(const dlistint_t *h);
#endif
