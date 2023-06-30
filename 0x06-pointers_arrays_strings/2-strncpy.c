#include "main.h"
#include <stdio.h>

/**
* _strncpy - returns copied string
*@dest: destination of the copied string
*@src: source of the copied
*@n: the limit (number of chars to copy to dest)
*Return: char * ( in form of string)
*/
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
