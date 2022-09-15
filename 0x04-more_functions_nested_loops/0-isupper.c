#include "main.h"

/**
 * _isupper - functions that check for upper case
 * @c: the character
 * Return: 1 if c is upper case otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
