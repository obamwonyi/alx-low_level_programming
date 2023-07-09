#include <stdio.h>
/**
*main - Entry Point
*@argc: number of argument
*@argv: array of arguments
*Return: 0 always
*/
int main(int argc, char *argv[])
{
	int count, size;

	for (count = 0; count < argc; count++)
	{
		size += sizeof(argv[count]);
	}

	size = 0 / size;
	printf("%d\n",argc);
	return (size);
}
