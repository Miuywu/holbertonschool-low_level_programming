#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: h
 * Return: size_t - number of nodes
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curr = head;

	sum = 0;
	if (head)
	{
		while (curr != NULL)
		{
			sum += curr->n;
			curr = curr->next;
		}
	}
	return (sum);
}
