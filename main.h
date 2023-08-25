#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#include <stdarg.h>

#include <stdlib.h>

#include <unistd.h>

#include <limits.h>

#define OUTPUT BUF_SIZE 1024
#define BUF_FLUSH -1


#define NULL_STRING "(null)"

#define PARAS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE  1
#define CONVERT_UNSIGNED   2

/* _put.c */
int _puts(char *str);
int _putchar(char c);

/* _printf.c */
int _printf(const char *format, ...);

void print_buffer(char buffer[], int *buff_ind);
/* number.c */
char *convert(long int num, int base, int flags, int printed);
int print_unsigned(va_list args, int printed);
int print_address(va_list args, int printed);

/* specifer.c */
char *get_width(char *s, int printed, va_list args);
int (*get_specifer(char *s))(va_list args, int printed);
int get_print_func(char *s, va_list args, int printed);
int get_flag(char *s, int printed);
int get_modifier(char *s, int printed);

/* print_number.c */
int _isdigit(int c);
int _strlen(char *s);
int print_number_left_shift(char *str, int printed);
int print_number(char *str, int printed);
int print_number_right_shift(char *str, int printed);

/* convert_number.c */
int print_binary(unsigned int num, int printed);
int print_hex(unsigned int num, int printed, int uppercase);
int print_pointer(va_list args, int printed);
int print_octal(unsigned int num, int printed, int uppercase);

/* print_functions.c */
int print_char(va_list args, int printed);
int print_string(va_list args, int printed);
int print_int(va_list args, int printed);
int print_percent(va_list args, int printed);
int print_S(va_list args, int printed);

/* simple_pointers.c */
int print_rev(va_list args, int printed);
int print_from_to(char *start, char *stop, char *except);
int print_rot13(va_list args, int printed);

#endif
