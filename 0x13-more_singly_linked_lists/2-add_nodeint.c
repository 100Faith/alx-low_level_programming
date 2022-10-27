#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of alistint_t list.
 * @n: value of the element in the list
 * @head: pointer to head
 *
 * Return: address of the node added.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (*head)
		newnode->next = *head;

	*head = newnode;

	return (newnode);
}
