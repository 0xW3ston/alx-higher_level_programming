#ifndef LISTS_HEADER
#define LISTS_HEADER

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: int
 * @next: points to next
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

int check_cycle(listint_t *list);
size_t print_listint(const listint_t *h);
void free_listint(listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
