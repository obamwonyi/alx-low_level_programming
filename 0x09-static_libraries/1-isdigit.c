/**
*_isdigit - check is argument passed to the function is digit
*@c: value to check for digit or not
*Return: 1 if digit, 0 if not digit
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
