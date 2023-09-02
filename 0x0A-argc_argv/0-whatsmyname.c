#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* @argc: the argument count
* @argv: the array of arguments
* Return: the program name (char *)
*/
int main(int argc, char *argv[])
{
	int i = 0;
	int fElement = argc - 1;

	while (argv[fElement][i] != '\0')
	{
		_putchar(argv[fElement][i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
