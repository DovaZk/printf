#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int strle(char *str);

void strcopy(char *btr, const char *str);

/*Writes a character*/
int _putchar(char c);

void *op_menu(char *s, ...);

void pchar(va_list charl);

/*Writes a string*/
void pstring(va_list charl);

/**
 * struct datos - Structure
 * @s: pointer arguments
 * @func: pointer function
 */

typedef struct datos
{
	char *s;
	void (*func)(va_list);
} dato;

#endif