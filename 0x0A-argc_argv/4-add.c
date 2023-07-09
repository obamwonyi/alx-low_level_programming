#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*numCheck - check for number
*@string: string
*Return: 0;
*/
int numCheck(char *string)
{
	unsigned int count;

	for (count = 0; count < strlen(string); count++)
	{
		if (!isdigit(string[count]))
		{
			return (0);
		}
	}
	return (1);
}
/**
*main - Entry Point
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/
int main(int argc, char *argv[])
{
	int count;
	int num;
	int sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (numCheck(argv[count]))
		{
			num = atoi(argv[count]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
