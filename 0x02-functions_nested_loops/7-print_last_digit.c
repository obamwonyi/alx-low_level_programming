#include "main.h"
/**
*print_last_digit - print the last digit of a number
*@x: number to check for last digit
*Return: value of last digit of x
*/
int print_last_digit(int x)
{
	int lastDigit = x % 10;

	if (lastDigit < 0)
	{
		lastDigit = -1 * lastDigit;
		_putchar(lastDigit + 48);
		return (lastDigit);
	}
	_putchar(lastDigit + 48);
	return (lastDigit);
}
