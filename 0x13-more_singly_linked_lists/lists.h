#ifndef YOUR_HEADER_H
#define YOUR_HEADER_H

#include <stddef.h>
#include <stdlib.h>

/* Define your struct */
typedef struct listint_t {
    int n;
    struct listint_t *next;
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);


#endif /* YOUR_HEADER_H */
