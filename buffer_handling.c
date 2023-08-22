#include "main.h"
#include <stdio.h>
/**
 * print_buffer - 
 *
 *
 */

void print_buffer(char buffer[], int *buff_ind)
{
	int buffer_index = 0;
	int printed_chars = 0;
	char buffer[BUFFER_SIZE];
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
			format++;

		else if (*format == 'b')
		{
			format++;
			unsigned int num = va_arg(args, unsigned int);
			buffer_index += sprintf(&buffer[buffer_index], "%u", num);
		}
		else if (*format == 'c')
		{
			format++;
			char c = va_arg(args, int);
			buffer[buffer_index++] = c;
		}
		else
		{
			buffer[buffer_index++] = *format;
		}

		format++;
	}
}
