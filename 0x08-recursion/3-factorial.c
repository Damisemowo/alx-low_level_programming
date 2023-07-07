#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: Nuber to return a factorial for
 * Return: -1 to indicate an error
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
