#include <stdio.h>
#include "main.h"
/**
 * _islower - function name
 * @c : variable
 * description : checks if it is caselower
 *
 * Return: int
 *
 * Time Complexity: O(1)
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
