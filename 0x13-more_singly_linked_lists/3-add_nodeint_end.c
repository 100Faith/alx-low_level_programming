#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list.
 * @head: pointer to the first element in the list.
 * @n: data to insert in the new element.
 *
 * Return: address of the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *current;

	if (!head || !newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!*head)
		*head = newnode;
	else
	{
		current = *head;
			while (current->next)
				current = current->next;
		current->next = newnode;
	}
	return (newnode);
}
