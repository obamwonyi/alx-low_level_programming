#include "main.h"
/**
* _puts - prints out a string
* @str: carries the string to be printed out
* Return: None
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
