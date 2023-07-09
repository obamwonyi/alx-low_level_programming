#include <stdio.h>
/**
*main - Entry Point
*@argc: number of argument commint from terminal
*@argv: an array of string that stores all the argument
*Return: 0
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
