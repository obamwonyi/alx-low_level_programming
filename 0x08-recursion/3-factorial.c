#include "main.h"
/**
*factorial - finds factorial of a value
*@n: number who's factorial is to be calculated
*Return: final value, or -1
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

