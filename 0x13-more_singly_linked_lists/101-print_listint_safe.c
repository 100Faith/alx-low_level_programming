#include "lists.h"
/**
 * print_listint_safe - can print a linked list with a loop.
 * @head: pointer to the 1st node of the linked list.
 *
 * Return: Number of nopdesin the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	temp_n = head;
	while (temp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		counter++;
		temp_n = temp->next;
		l_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (temp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (counter);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
