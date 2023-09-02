#include <stdio.h>
#include "main.h"
/**
* main - entry point
* @argc: argument count
* @argv: array of arguments
* Return: all arguments
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
