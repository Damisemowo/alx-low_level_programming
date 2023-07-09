#include "main.h"
/**
 * check_if_prime_number - helper function that checks
 * if a number is a prime number recursively
 * @n: number to be checked
 * @x: the iterator
 * Return: 1 if number is a prime nunmber and 0 if it is not
 */

int check_if_prime_number(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (check_if_prime_number(n, x - 1));
}

/**
 * is_prime_number - function that identifies a prime number
 * @n: number to be checked
 * Return: 1 if number is a prime nunmber and 0 if it is not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_if_prime_number(n, n - 1));
}
