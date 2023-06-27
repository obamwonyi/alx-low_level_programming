/**
* swap_int - swap integers
* @a: first integer
* @b: second integer
* Return: None
*/
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
