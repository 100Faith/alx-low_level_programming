#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data of a linked list.
 * @head: first node in the linked list.
 *
 * Return: The sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
