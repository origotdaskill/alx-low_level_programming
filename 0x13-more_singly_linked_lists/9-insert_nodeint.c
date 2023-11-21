#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to be assigned to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int count = 0;
    listint_t *new_node, *current;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    /* Assign values to the new node */
    new_node->n = n;

    /* If the index is 0, insert at the beginning */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    /* Traverse the list to find the node before the desired index */
    current = *head;
    while (current != NULL && count < idx - 1)
    {
        current = current->next;
        count++;
    }

    /* Check if it is possible to add the new node at the desired index */
    if (current == NULL || count != idx - 1)
    {
        free(new_node);
        return NULL;
    }

    /* Insert the new node at the desired index */
    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}

