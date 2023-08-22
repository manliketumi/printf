#include "main.h"
/**
 * _printf - Implement the basic conversion specifiers
 * @format: formated output
 * Return: printed characters
 */
int _printf(const char *format, ...)
{
	int count 0;

	va_list args;

	va_start(args, format);
	const char *ch;

	for (ch = format; *ch != '\0'; ch++)
	{
		if (*ch == '%')
		{
			ch++;
			switch (*ch)
			{
			case 'c':
			{
				int c = va_arg(args, int);

				putchar(c);
				count++;
				break;
			}
			case 's':
			{
				const char *str = va_arg(args, const char *);

				while (*str != '\0')
				{
					putchar(*str);
					str++;
					count++;
				}
				break;
			}
			case '%':
				putchar('%');
				count++;
				break;
		}
		else
		{
			putchar(*ch);
			count++;
		}
	}
	va_end(args);
	return (count);
}
