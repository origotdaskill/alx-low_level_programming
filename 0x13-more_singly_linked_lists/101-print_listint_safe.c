#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    if (head == NULL)
        exit(98);

    slow = head;
    fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);

        slow = slow->next;
        fast = fast->next->next;

        count++;

        /* Check for loop */
        if (slow == fast)
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            exit(98);
        }
    }

    /* Print the last node */
    printf("[%p] %d\n", (void *)slow, slow->n);

    return count;
}

