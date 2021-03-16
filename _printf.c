#include "holberton.h"

/**
 * _printf - print string or character fromo main
 * @format: enter string or other char
 * Return: the lentgh of the string
 */
int _printf(const char *format, ...)
{
	char buffer[1024];

	int (*form)(va_list);

	strcopy(buffer, format);

	int lent;

	lent = strle(buffer);

	int i = 0;
	char c;

	va_list lista;

	va_start(lista, format);

	for (; i < (lent - 1); i++)
	{
		if (buffer[i] == '%')
		{
			i++;
			form = op_menu((buffer + i), lista);
			form(lista);
		}
		else
		{
			c = buffer[i];
			_putchar(c);
		}
	}

	va_end(lista);
	return (lent);
}
