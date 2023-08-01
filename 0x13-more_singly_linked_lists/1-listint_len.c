#include "lists.h"

/**
*listint_len - prints the linked list
*@h: point to the first node of the linked list
*Return: size of the list
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
