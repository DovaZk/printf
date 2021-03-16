#include "holberton.h"

/**
 * pchar - print char.
 * @charl: argument
 * Return: Void
 */
void pchar(va_list charl)
{
	char p = va_arg(charl, int);
		_putchar(p);
}
/**
 * pstring - print string.
 * @charl: argument
 * Return: Void
 */
void pstring(va_list charl)
{
	char *str = va_arg(charl, char *);
	int lent = strle(str);
	int i = 0;
		for (; str[i]; i++)
	{
	if (str != NULL)
	{
	_putchar(str[i]);
	}
	}
}
