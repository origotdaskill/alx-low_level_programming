#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, int n)
{
    listint_t *new_node, *last_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        /* Otherwise, find the last node and link the new node to it */
        last_node = *head;
        while (last_node->next != NULL)
            last_node = last_node->next;

        last_node->next = new_node;
    }

    return new_node;
}

