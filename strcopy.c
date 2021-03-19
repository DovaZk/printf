#include "holberton.h"
/**
 * strcopy - copy to buffer
 * @btr:- pointer
 *
 * @str: return pointer.
 */

void strcopy(char *btr, const char *str)
{
	int i;
		for (i = 0; str[i]; i++)
	{
		btr[i] = str[i];
	}
	btr[i] = '\0';
}
