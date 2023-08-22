#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#include <stdarg.h>

#include <stdlib.h>

#include <unistd.h>

#include <limits.h>

#include <ctype.h>

#define BUFFER_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
void printf_buffer(char buffer[], int *buff_ind);
int print_string(va_list args, int printed);
int print_integer(va_list args, int printed);
int print_binary(unsigned int num, int printed);
int print_hex(unsigned int num, int printed, int uppercase);
int print_pointer(va_list args, int printed);
int print_octal(unsigned int num, int printed, int uppercase);
int print_char(va_list args, int printed);


#endif
