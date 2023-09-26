#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/* Define the struct listint_s */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);

#endif /* LIST_H */
