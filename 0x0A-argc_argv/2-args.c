#include <stdio.h>
/**
*main - Entry Point
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 always
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
