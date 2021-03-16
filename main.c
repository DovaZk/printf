#include <stdio.h>

int main(void)
{
	char p = 'K';
	char *p1 = "joel";
	char *p2 = "sergio";
	int lent = _printf("Hola compañeros [%c], [%s], [%s]", p, p1, p2);
	printf("\n%d\n", lent);
}
