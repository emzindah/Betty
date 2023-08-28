#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string inserted to the first position
 * Return: pointer to the newly assigned node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)

		node->next = NULL;
	else
			node->next = *head;
		node->str = strdup(str);
		node->len = len(str);
		*head = node;
	return (*head);
}
/**
 * len - get the length of string
 * @str: string to get the length
 * Return: length of the string
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
