#include "holberton.h"
#include <stdio.h>

int main(void)
{
	char p = 'K';
	char *p1 = "joel";
	int lent = _printf("Hola compañeros [%c], [%s]\n", p, p1);
	printf("\n%d\n", lent);
	return (0);
}
