#include "lists.h"
/**
 * add_nodeint - add node to the begining of the list
 * @head: ptr to the head pointer
 * @n: new integer to be created
 * Return: adress of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_n;

	if (head == NULL)
		return (0);
	n_n = malloc(sizeof(listint_t));
	if (n_n == NULL)
		return (NULL);
	if (*head == NULL)
		n_n->next = NULL;
	else
		n_n->next = *head;
	n_n->n = n;
	*head = n_n;

	return (0);
}
