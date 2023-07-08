#include "main.h"
/**
 * sqrt_of_given_number - helper function
 * that finds the square root of a number
 * @n: the number to calculate the square root of
 * @x: the iterator of the function
 * Return: the natural square root of n
 */

int sqrt_of_given_number(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (sqrt_of_given_number(n, x + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number to calculate the square root of
 * Return: sqrt of given number or -1 if number has no sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_of_given_number(n, 0));
}
