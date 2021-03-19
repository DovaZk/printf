#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int strle(char *str);

void strcopy(char *btr, const char *str);

/*Writes characters to stdout*/
int charprintf(char c);
int (*op_menu(const char *st, int))(va_list);
/*Writes a character*/
int pchar(va_list charl);
/*Writes a string*/
int pstring(va_list charl);

int number(unsigned int n);
/*Writes any number*/
int print_number(va_list valist);
/**
 * struct datos - Structure
 * @s: pointer arguments
 * @func: pointer function
 */

typedef struct datos
{
	char *s;
	int (*func)(va_list);
} dato;

#endif
