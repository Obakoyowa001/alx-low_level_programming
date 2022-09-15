#include "main.h"
/**
 * _isdigit - function that check for numbers from  0 - 9
 *@c: the character
 * Return: 1 if c is uppercase otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
