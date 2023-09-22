#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/* Definition of the list_t structure */
typedef struct list_s {
    char *str;
    int len;
    struct list_s *next;
} list_t;

/* Function prototype for print_list */
size_t print_list(const list_t *h);

#endif /* LIST_H */
