#include "main.h"

/**
 * printf_string - print a string
 * @args: arguements
 * @printed: characters
 * Return: printed charcaters
 */

int printf_string(va_list args, int printed)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		printed++;
		string++;
	}
	return (printed);
}
