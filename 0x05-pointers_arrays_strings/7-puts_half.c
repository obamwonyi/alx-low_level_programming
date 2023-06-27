#include "main.h"
/**
* puts_half - print half of a string
* @str: string to cut in half
* Return: None
*/
void puts_half(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	x++;

	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
