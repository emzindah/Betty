#include "lists.h"
/**
 * print_listint - print the int data in a singly linked list
 * @h: head ptr to the list
 * Return: num of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int a;

	if (h == NULL)
		return (0);
	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
