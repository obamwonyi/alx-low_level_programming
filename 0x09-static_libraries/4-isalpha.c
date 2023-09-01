#include "main.h"
/**
*_isalpha - check for lower or uppercase or otherwise
*@c: ASCII int values for characters
*Return: 1 on success, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
