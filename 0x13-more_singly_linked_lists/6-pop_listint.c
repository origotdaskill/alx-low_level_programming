#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer of the head of the list.
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    int data;
    listint_t *temp;

    /* Check if the list is empty */
    if (*head == NULL)
        return 0;

    /* Store the data of the head node */
    data = (*head)->n;

    /* Save the address of the head node */
    temp = *head;

    /* Move the head pointer to the next node */
    *head = (*head)->next;

    /* Free the memory of the deleted node */
    free(temp);

    return data;
}

