#include "main.h"
/**
*main - Entry Point
*Description: 1-alphabet.c
*Return: 0 always
*/
void print_alphabet(void)
{
	for (int i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();

	return (0);
}
