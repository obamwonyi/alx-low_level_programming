#include "main.h"
/**
*_pow_recursion - power recursion
*@x: int x the main number
*@y: int y the number to raise x to
*Return: int of x raised to power y
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
