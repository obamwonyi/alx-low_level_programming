#include "main.h"
/**
*print_most_numbers - prints int 0 - 9 , excluding 2 and 4
*Return: None
*/
void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if ((a != 52) && (a != 50))
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
