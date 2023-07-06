#include "main.h"
/**
*_strlen_recursion - find the length of a string with recursion
*@s: char pointer argument
*Return: Int (string length)
*/
int _strlen_recursion(char *s)
{
	int count;

	count = 0;

	if (*s > '\0')
	{
		count += _strlen_recursion(s + 1) + 1;
	}
	return (count);
}
