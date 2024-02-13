#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a pointer that points to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		val = (val << 1) + (*b - '0');
		b++;
	}

	return (val);
}
