#include <unistd.h>

/**
 *_putchar - function read a char and return int
 * @ch: enter char form main
 * Return: write char by char in console
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
