#include "main.h"
#include <stdio.h>
/**
 * print_binary - print the binary representation
 * of unsigned integer
 * @num: unsigned integer
 * @printed: the characters
 * Return: characters
 */

int print_binary(unsigned int num, int printed)
{
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	char binary[32];
	int index = 0;

	while (num > 0)
	{
		binary[index] = (num % 2) + '0';
		num /= 2;
		index++;
	}

	int printed_chars = 0;

	for (index--; index >= 0; index--)
	{
		_putchar(binary[index]);
		printed_chars++;
	}

	return (printed_chars);
}
