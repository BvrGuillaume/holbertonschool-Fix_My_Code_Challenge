#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer value
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 *
 * Description: Doubly linked list node structure
 * for custom project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
void free_dlistint(dlistint_t *head);

#endif /* LISTS_H */
