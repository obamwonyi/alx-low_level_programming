#include "main.h"
#include <stdio.h>
/**
*string_nconcat - concatenates two string, s1 and s2
*@s1: first string
*@s2: second string
*@n: to check for byte length of s2
*Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;
	unsigned int s1Length = 0;
	unsigned int s2Length = 0;

	/** check if s1 is null */
	if (s1 == NULL)
		s1 = "";
	/** check if s2 is null */
	if (s2 == NULL)
		s2 = "";
	/**loop for as long as s1 current value is not null zero*/
	while (s1[str1Length] != '\0')
		s1Length++;
	/**loop for as long as s2 current value is not null zero*/
	while (s2[str2Length] != '\0')
		s2Length++;
	str = malloc(s1Length + n + 1);
	/** if no pointer was addressed return null */
	if (str == NULL)
		return (NULL);
	/** fill str (array) with s1 values */
	for (i == 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/**now add s2 value to str */
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
