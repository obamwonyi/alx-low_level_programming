#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - entry point
* @argc: argument count
* @argv: array of argument
* Return: int
*/
int main(int argc, char *argv[])
{
	int num1,num2 = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[argc-2]);
	num2 = atoi(argv[argc-1]);

	printf("%d\n", (num1 * num2));

	return (0);
}
