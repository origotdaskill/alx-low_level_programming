#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        /* Store the next pointer in a temporary variable */
        temp = head->next;

        /* Free the string inside the node */
        free(head->str);

        /* Free the node itself */
        free(head);

        /* Move to the next node */
        head = temp;
    }
}
