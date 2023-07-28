#include "lists.h"

/**
*_strlen - return the string length
*@s: string to check for length
*Return: length of string(s)
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
*print_list - prints linked lists
*@h: pointer to the first node
*Return: size of the linked list
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
