#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Implement the basic conversion specifiers
 * @format: formated output
 * Return: printed characters
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

/**
 * printf_buffer - Print the contents of the buffer
 * @buffer: Array
 * @buff_ind: Index that represents the length
 */
void printf_buffer(char buffer[], int *buff_ind)
{
if (*buff_ind > 0)
write(1, &buffer[0], *buff_ind);

*buff_ind = 0;

}
