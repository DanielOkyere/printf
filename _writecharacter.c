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

int p_int(int number)
{
	int size, digit, result;
	long c, sign;

	sign = 1;
	digit = 0;
	size = 1;
	c = number;
	result = 0;

	if (number < 0)
	{
		_putchar('-');
		sign = -1;
		c *= sign;
		result++;
	}

	for (; c >= 10; size++)
	{
		c = c / 10;
	}

	c = sign * (long)number;

	while (size >= 2)
	{
		digit = (c / exponent(10, size - 1));
		_putchar(digit + '0');
		c = c % exponent(10, size - 1);
		size--;
		result++;
	}
	_putchar(c % 10 + '0');
	result++;
	return (result);
}

int exponent(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * exponent(x, y - 1));
}
