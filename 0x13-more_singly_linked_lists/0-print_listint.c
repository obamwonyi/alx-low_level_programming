#include "lists.h"

/**
*print_listint - prints a linked lists
*@h: pointer to the very first node
*Return: size of the list printed
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
