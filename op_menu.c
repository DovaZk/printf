#include "holberton.h"

/**
 * op_menu - has the characters to identify the functions to execute
 * @st: where does the character to compare enter
 * @p: the number of the character to compare
 * Return: the data of the function already executed or 0
 */
int (*op_menu(const char *st, int p))(va_list)
{
	dato letter[] = {
		{"c", pchar},
		{"s", pstring},
		{"i", print_number},
		{"d", print_number},
		{NULL, NULL}
	};

	int i;

	for (i = 0; letter[i].s != NULL; i++)
	{
		if (letter[i].s[0] == st[p])
		{
			return (letter[i].func);
		}
	}

	return (0);
}
