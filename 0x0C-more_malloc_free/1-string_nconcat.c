#include "main.h"
#include <stdio.h>
/**
*string_nconcat - concatenates two string, str1 and str2
*@str1: first string
*@str2: second string
*@num: to check for byte length of str2
*Return: char
*/
char *string_nconcat(char *str1, char *str2, unsigned int num)
{
	char *str;
	unsigned int i, j;
	unsigned int str1Length = 0;
	unsigned int str2Length = 0;

	/** check if str1 is null */
	if (str1 == NULL)
		str1 = "";
	/** check if str2 is null */
	if (str2 == NULL)
		str2 = "";
	/**loop for as long as str1 current value is not null zero*/
	while (str1[str1Length] != '\0')
		str1Length++;
	/**loop for as long as str2 current value is not null zero*/
	while (str2[str2Length] != '\0')
		str2Length++;
	str = malloc(str1Length + num + 1);
	/** if no pointer was addressed return null */
	if (str == NULL)
		return (NULL);
	/** fill str (array) with str1 values */
	for (i == 0; str1[i] != '\0'; i++)
		str[i] = str1[i];
	/**now add str2 value to str */
	for (j = 0; j < num; j++)
	{
		str[i] = str2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
