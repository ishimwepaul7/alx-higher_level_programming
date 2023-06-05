#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listin_s - singly linked list
 * @in: integer
 * @next: point to the next node
 *
 * Desc: singly linked list node struct
 * for Holterton project
 */
typedef struct listin_s
{
	int in;
	struct listin_s *next;
} listin_t;

size_t print_listin(const listin_t *h);
listin_t *add_nodein(listin_t **head, const int in);
void free_listin(listin_t *head);
int check_cycle(listin_t *list);

#endif
