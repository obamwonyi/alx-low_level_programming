#include "main.h"
/**
*_islower - check for lowercase letters
*@c: lower or upper case character
*Return: 1 on success, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
