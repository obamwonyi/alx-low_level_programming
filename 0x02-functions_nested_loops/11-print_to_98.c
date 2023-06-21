#include "main.h"
/**
*print_to_98 - print out all natural number
*Return: None
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n + 48);
			n--;
		}
	}
	else if (n == 98)
	{
		_putchar(n + 48);
	}
	else
	{
		while (n < 98)
		{
			_putchar(n + 48);
			n++;
		}
	}
}
