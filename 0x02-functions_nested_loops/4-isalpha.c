#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks whether alphabets character
 * description - return 1 if upper or lower
 * Return: 1 if alphabet 0 otherwise
 *@c: int
 *
 * Time Complexity: O(1)
 *
 */
int _isalpha(int c)

{
	if (c >= 97 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
