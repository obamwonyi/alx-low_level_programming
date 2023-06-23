#include "main.h"
/**
*print_square - print out square
*@size: size of the square
*Return: None
*/
void print_square(int size)
{
	int i;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
