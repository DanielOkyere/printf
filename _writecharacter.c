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
/**
 * _puts - prints a string
 * @str: pointer to the string
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
