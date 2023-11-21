#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int count = 0;
    listint_t *current, *temp;

    /* Check if the list is empty */
    if (*head == NULL)
        return -1;

    /* If the index is 0, delete the node at the beginning */
    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return 1;
    }

    /* Traverse the list to find the node before the desired index */
    current = *head;
    while (current != NULL && count < index - 1)
    {
        current = current->next;
        count++;
    }

    /* Check if it is possible to delete the node at the desired index */
    if (current == NULL || current->next == NULL)
        return -1;

    /* Delete the node at the desired index */
    temp = current->next;
    current->next = current->next->next;
    free(temp);

    return 1;
}

