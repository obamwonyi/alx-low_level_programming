#include <stdio.h>
#include "main.h"
/**
*_puts_recursion - recursion of chars
*@s: char as a pointer variable
*Return : None
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
