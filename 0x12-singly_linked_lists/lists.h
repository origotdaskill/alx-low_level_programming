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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
/* Function prototype for print_list */

#endif /* LIST_H */
