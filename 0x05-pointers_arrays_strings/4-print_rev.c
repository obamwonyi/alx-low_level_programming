#include "main.h"
/**
* print_rev - prints string in reverse form
* @s: string passed as argument.
* Return: None
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
