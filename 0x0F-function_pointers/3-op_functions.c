#include "3-calc.h"
/**
*op_add - adds a to b
*@a: the first int
*@b: the second int
*
*Return: the sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - subtracts b from a
*@a: the first int
*@b: the second int
*Return: the difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - multiply a with b
*@a: the first int
*@b: the second int
*Return: the multiple
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - divide a by b
*@a: the dividend
*@b: the devisor
*Return: the quotient
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod - a modulus b
*@a: the first int
*@b: the second int
*Return: remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
