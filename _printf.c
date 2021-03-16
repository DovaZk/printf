#include "holberton.h"

/**
 * _printf - print string or character fromo main
 * @format: enter string or other char
 * Return: the lentgh of the string
 */
int _printf(const char *format, ...)
{
	char buffer[2024];
	int i;
	char c;

	int (*form)(va_list);

	va_list lista;

	strcopy(buffer, format);

	va_start(lista, format);

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] == '%')
		{
			i++;
			*(void **) (&form) = op_menu((buffer + i), lista);
			form(lista);
		}
		else
		{
			c = buffer[i];
			_putchar(c);
		}
	}

	va_end(lista);
	return (strle(buffer));
}
