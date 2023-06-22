#include "main.h"
/**
*_isupper - Checks for uppercase letter
*@c: interger to test with ansi c for character represented
*Return: 1 on true, 0 on false
*/
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
