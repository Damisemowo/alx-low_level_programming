#include "main.h"

/**
* power - calculate the result of raising base to the power of exp
* @base: the base
* @exp: the exponent
*
* Return: the result of raising base to the power of exp
*/

unsigned long int power(unsigned int base, unsigned int exp)
{
	unsigned long int result = 1;

	unsigned int i = 0;

	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);
}

/**
* print_binary - print the binary representation of a number
* @num: the number to print in binary
*
* Description: This function prints the binary representation of a number.
*/
void print_binary(unsigned long int num)
{
	unsigned long int divisor, check;

	int i;

	char flag = 0;

	int bits = sizeof(unsigned long int) * 8;

	divisor = power(2, bits - 1);
	for (i = 0; i < bits; i++)

	{
		check = num & divisor;
		if (check == divisor)
		{
			flag = 1;
			putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			putchar('0');
		}
		divisor >>= 1;
	}
}
