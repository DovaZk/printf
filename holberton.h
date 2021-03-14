#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*_typefor(const char *argu, int argb))(va_list);
int print_char(va_list valist);
int print_string(va_list valist);
int print_int(va_list valist);
int count_num(unsigned int n);
int print_rot13(char *s);
int print_R(va_list valist);
int print_binary(va_list valist);

#endif

