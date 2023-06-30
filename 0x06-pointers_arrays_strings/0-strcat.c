#include <stdio.h>
#include "main.h"
/**
*_strcat - concatenate strings
*@dest: first string
*@src: second string
*Return: char (in form of string)
*/
char *_strcat(char *dest, char *src)
{

	int i, x;

	x = 0;

	while (dest[x])
	{
		x++;
	}


	for (i = 0; i < src[i]; i++)
	{
		dest[x++] = src[i];
	}

	return (dest);
}
