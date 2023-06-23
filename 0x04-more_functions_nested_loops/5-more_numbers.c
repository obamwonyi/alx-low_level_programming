#include "main.h"
/**
*more_numbers - print out the number 0-14 10 times
*Return: None
*/
void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b > 9)
			{
				_putchar('1');
			}
			_putchar(b % 10 + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
