#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t list.
 * @head: Pointer to a pointer to the head of the list
 * @idx: Index where the new node should be added (starting at 0)
 * @n: Integer value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL)
	{
		return NULL;
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return NULL;
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	current = *head;
	while (current != NULL)
	{
	if (i == idx - 1)
	{
		newNode->next = current->next;
		current->next = newNode;
		return (newNode);
	}
		current = current->next;
		i++;
	}

	free(newNode);
	return (NULL);
}
