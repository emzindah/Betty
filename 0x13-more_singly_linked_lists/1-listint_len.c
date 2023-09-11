#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head ptr of
 * Return: num of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int a;

	if (h == NULL)
		return (0);
	for (a = 0; h != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}
