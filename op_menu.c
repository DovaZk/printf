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

while (array[i].s)
{
	if (array[i].s[0] == *s)
	{
		return (array[i].func);
	}
	i++;
}

return (0);
}
