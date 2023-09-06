#include <string.h>
#include <stdlib.h>
/**
* _strdup - return curpyied string
* @str: string
* Return: pointers to characters
*/
char *_strdup(char *str)
{

	if (str == NULL)
	{
		return (NULL);
	}

	char *newPointer = (char *)malloc(strlen(str) + 1);

	if (newPointer == NULL)
	{
		return (NULL);
	}

	strcpy(newPointer, str);

	return (newPointer);

}
