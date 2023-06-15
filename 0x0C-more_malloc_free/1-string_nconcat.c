#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * *string_nconcat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: ptr to the outcome string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, k = 0, j = 0;
	char *str;

	while (s1 && s1[k])
		k++;

	while (s2 && s2[j])
		j++;

	if (n < j)
		str = malloc(sizeof(char) * (k + n + 1));
	else
		str = malloc(sizeof(char) * (k + j + 1));

	if (!str)
		return (NULL);
	while (a < k)
	{
		str[a] = s1[a];
		a++;
	}

	while (n >= j && a < (k + n))
		str[a++] = s2[b++];
	while (n < j && a < (k + j))
		str[a++] = s2[b++];

	str[a] = '\0';
	return (str);



}
