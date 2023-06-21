#include "main.h"
/**
*print_last_digit
*@x: number to check for last digit
*Return: value of last digit of x
*/
int print_last_digit(int x)
{
	int lastDigit = x % 10;

	if(lastDigit < 0)
	{
		lastDigit = -1 * lastDigit;
		_putchar(lastDigit);
		return (lastDigit);
	}
	_putchar(lastDigit);
	return (lastDigit);
}
