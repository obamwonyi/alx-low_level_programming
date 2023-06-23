#include "main.h"
/**
*print_diagonal - print diagonal
*@n: number of diagonals to print
*Return: None
*/
void print_diagonal(int n)
{
	int i;
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < n; x++)
			{
				if (x == i)
					_putchar(92);
				else if (x < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
