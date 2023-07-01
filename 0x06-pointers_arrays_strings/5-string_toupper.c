#include <stdio.h>
#include "main.h"
/**
*string_toupper - convert lower case letters to uppercase
*@str: string to convert
*Return: char
*/
char *string_toupper(char *str)
{

	int i;
	int hold;

	for (i = 0; str[i] != '\0'; i++)
	{
		/**
		* if they are lower case laters (according to ASCII code)
		* execute code block
		*/
		if (((int)str[i] > 96) && ((int)str[i] < 123))
		{
			hold = (int)str[i] - 32;
			str[i] = (char)hold;
		}
	}

	return (str);
}
