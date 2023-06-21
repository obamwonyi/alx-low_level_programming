#include "main.h"
/**
*_abs - estimate the absolute value
*@x: reserve the number to be estimated
*Return: absolute value of the integer
*/
int _abs(int x)
{
	if(x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
