#include "main.h"
/**
*print_alphabet_x10 - print alphabet
*Description: print all the alphabet in lowercase.
*Return: None.
*/
void print_alphabet_x10(void)
{
	int x = 0;

	while (x < 10)
	{
		int i = 0;

		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

		x++;
	}
}
