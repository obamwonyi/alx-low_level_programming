#include <stdio.h>
#include "main.h"
/**
* main - entry point
* @argc: argument count
* @argv: array of arguments
* Return: numbers of argument (int)
*/
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}


	while (argv[i] != argv[argc])
	{
		i++;
	}

	printf("%d\n", (i - 1));
	return (0);
}
