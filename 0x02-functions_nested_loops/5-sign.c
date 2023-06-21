#include "main.h"
/**
*print_sign - print sign of numbers
*@n: numbers whose sign are to be determind
*Return: 0 if sign is 0, 1 if sign is positive and -1 if sign is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
