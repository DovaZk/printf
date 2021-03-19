#include "holberton.h"

/**
 * pchar - print the character that enters
 * @letter: enter the data from op_menu
 * Return: 1 the number of characters it prints
 */
int pchar(va_list letter)
{
	char str = va_arg(letter, int);

	charprintf(str);
	return (1);
}

/**
 * pstring - print by character a string
 * @letter: enter a va_list argument
 * Return: the lenght of string
 */
int pstring(va_list letter)
{
	char *string = va_arg(letter, char *);
	int i;

	if (string == NULL)
		string = "(Null)";

	for (i = 0; string[i]; i++)
		charprintf(string[i]);

	return (i);
}

/**
 * number - go through the number and reduce it
 * @n: reduce the number that enters by n
 * Return: the reduced number
 */
int number(unsigned int n)
{
	int count = 0;
	unsigned int x, z;

	if (n != 0)
	{
		z = (n / 10);
		x = (n % 10);
		count += number(z);
		count++;
		charprintf(x + '0');
		return (count);
	}
	return (0);
}
/**
 * print_number - runs through the number and prints it
 * @letter: enter the data from op_menu
 * Return: returns the number of characters printed
 */
int print_number(va_list letter)
{
	int a, b = 0;
	unsigned int x;

	a = va_arg(letter, int);

	if (a < 0)
	{
		charprintf('-');
		b = 1;
		x = a * (-1);
	}
	else
		x = a;

	if (x > 9)
		return (b + number(x));

	charprintf(x + '0');
	return (1 + b);
}
