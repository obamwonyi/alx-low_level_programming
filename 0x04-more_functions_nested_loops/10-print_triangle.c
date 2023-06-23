#include "main.h"
/**
*print_triangle - print triangles with #
*@size: size of the triangle
*Return: None
*/
void print_triangle(int size)
{
	int i, j;
    
	for (i = 1; i <= size; i++) 
	{
		for (j = 1; j <= size - i; j++) 
		{
			_putchar(' ');
		}
        
		for (j = 1; j <= i; j++) 
		{
			_putchar('#');
		}
        
		_putchar('\n');
    }
}
