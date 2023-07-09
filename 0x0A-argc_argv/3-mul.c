#include <stdio.h>
/**
*main - Entry Point
*@argc: number arguments
*@argv: array arguments
*Return: 0 on success, 1 on fail
*/
int main(int argc, char *argv[])
{
	if ((argc < 3) | (argc > 3))
	{
		printf("Error\n");
	}

	return (argv[1] * argv[2]);
}
