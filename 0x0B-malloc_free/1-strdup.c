#include <string.h>
#include <stdlib.h>
/**
* _strdup - return curpyied string
* @str: string
* Return: pointers to characters
*/
char *_strdup(char *str)
{
	char *newPointer = malloc(sizeof(str));

	if (str == NULL)
	{
		return (NULL);
	}

	if (newPointer == NULL)
	{
		return (NULL);
	}

	strcpy(newPointer, str);

	return (newPointer);

}
