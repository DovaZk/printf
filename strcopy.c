#include "holberton.h"
/**
 *strcopy - function
 *@btr: buffer.
 *@str: posicion.
 */
void strcopy(char *btr, const char *str)
{
	int i = 0;

	for (; str[i]; i++)
	{
		btr[i] = str[i];
	}
}
