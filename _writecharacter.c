#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a char
 * @c: character to print
 * Return: 1 on success
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
