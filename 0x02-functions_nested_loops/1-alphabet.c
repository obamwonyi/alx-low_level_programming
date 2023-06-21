#include "main.h"

/**
*print_alphabet - print alphabet
*Description: print all the alphabet in lowercase.
*Return: None.
*/
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
*main - Entry Point
*Description: 1-alphabet.c
*Return: 0 always
*/
int main(void)
{
	print_alphabet();

	return (0);
}
