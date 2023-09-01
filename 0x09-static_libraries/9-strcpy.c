#include "main.h"
/**
* _strcpy - copy string that is being pointed to by src
* @dest: pointer var
* @src: another pointer var
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int x;

	x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
