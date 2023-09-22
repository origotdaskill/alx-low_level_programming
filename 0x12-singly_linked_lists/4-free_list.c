#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
    list_t *current;
    list_t *temp;

    while (head != NULL)
    {
        current = head;
        temp = current->next;
        free(current->str);
        free(current);
        head = temp;
    }
}
