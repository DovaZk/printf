#include "holberton.h"
/**
 * _printf - print char, strings, numbers more
 * @format: enter char pointer from main
 * Return: lenght of string print
 */
int _printf(const char *format, ...)
{
	char buffer[2048];
	int i = 0;
	int lent = 0;
	va_list lista;

	if (*format != '\0')
		strcopy(buffer, format);

	va_start(lista, format);

	if (buffer[0] == '%' && buffer[1] == '\0')
		return (-1);

	for (i = 0; buffer[i] != '\0'; i++, lent++)
	{
		if (format[i] == '%')
		{
			i++;
			if (buffer[i] == '%')
			{
				charprintf(buffer[i]);
			}
			else
			{
				if (op_menu(buffer, (i)) == NULL)
				{
					charprintf(buffer[i - 1]);
					charprintf(buffer[i]);
				}
				else
				{
					lent--;
					lent += (op_menu(buffer, (i))(lista));
				}
			}
		}
		else
			charprintf(buffer[i]);
	}
	return (lent);
}
