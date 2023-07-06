#include "main.h"
/**
*square - square function
*@n: int
*@val: value in int
*Return: int
*/
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val + val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
/**
*_sqrt_recursion - square of a number
*@n: int value whose square we are to find
*Return: int
*/
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
