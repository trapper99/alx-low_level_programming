#include <stdio.h>
#include "main.h"
/**
 * print_sign - print sign of n
 * @n: int
 * description : return sign according to condition
 *
 * Return:+ if positive, 0 if zero and - if negative
 *
 * Time Complexity: O(1)
 *
 * Returns: The sign of the number
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
