#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - the function take two arguments
 * @format: formated output
 *
 * Return: formated results
 */

int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					count += fputs(va_arg(args, char*), stdout);
					break;
				case '%':
					_putchar('%');
					_putchar(*format);
					count += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}

		format++;
	}
	va_end(args);
	return (count);
}
