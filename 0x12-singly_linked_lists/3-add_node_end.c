#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t
 * @head: ptr to the first node
 * @str: new node to be added
 * Return: ptr to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t tmp;

	tmp = *head;
	if (head == NULL)
		node = c_node(str);
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp = node;
	return (*head);
}
/**
 * c_node - creates node
 * @str: string given to the created node
 * Return: ptr to the allocated memory
 */
list_t *c_node(const char *str)
{
	list_t *node;

	node = malloc(size of(list_t));
	if (node = NULL)
		return (NULL);
	node->str = strdup;
	node->len = len(str);
	node->next = NULL;
	return (node);
}
/**
 * len - get the length of string
 * @str: string to get the length
 * Return: length
 */
int len(const char *str)
{
	int a;

	if (str == NULL)
	return (0);

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
