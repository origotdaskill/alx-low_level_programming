#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL, *next = NULL, *current = *head;

    /* Traverse the list and reverse the pointers */
    while (current != NULL)
    {
        next = current->next;   /* Save the next node */
        current->next = prev;   /* Reverse the pointer */

        /* Move to the next node */
        prev = current;
        current = next;
    }

    /* Update the head to point to the first node of the reversed list */
    *head = prev;

    return *head;
}

