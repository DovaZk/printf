#include "holberton.h"
/**
 * op_menu - struct de tipos de formato
 * @array: argumentos
 * @s: posicion
 * Return: 0.
 */

void *op_menu(char *s, ...)
{
	dato array[] = {
		{"c", pchar},
		{"s", pstring},
/**{"", },*/
		{NULL, NULL},
	};

int i = 0;
void (*form)(va_list);

while (array[i].s)
{
	if (array[i].s[0] == *s)
	{
		form = array[i].func;
		return (*(void **) (&form));
	}
	i++;
}
return (0);
}
