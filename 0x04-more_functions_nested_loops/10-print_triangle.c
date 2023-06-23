#include "main.h"
/**
*print_triangle - print triangles with #
*@size: size of the triangle
*Return: None
*/
void print_triangle(int size)
{
	int i, x;

	for (i = 1; i <= size; i++)
	{
		for (x = 1; x <= size - 1; x++)
		{
			_putchar(' ');
		}
		for (x = 1; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
