#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string whose length to be counted
 * Return: 0 (success)
 */

int _strlen_recursion(char *s)
{
	int LOS = 0;

	if (*s != '\0')
	{
		LOS++;
		LOS += _strlen_recursion(s + 1);
	}
	return (LOS);
}
