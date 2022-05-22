#include "main.h"
#include <stdarg.h>

/**
* _print_int - prints int
* @args: arguments
* @flags: identifier
* Return: int
*/
int _print_int(va_list args, t_flags *flags)
{
	int n = va_arg(args, int);
	int result = count_digit(n);

	if (flags->space == 1 && flags->plus == 0 && n >= 0)
		result += _putchar(' ');
	if (flags->plus == 1 && n >= 0)
		result += _putchar('+');
	if (n <= 0)
		result++;

	print_number(n);
	return (result);
}

/**
* print_number - prints out number
* @n: int
*/
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
/**
* count_digit - counts the digit
* @n: n
* Return: int
*/
int count_digit(int n)
{
	unsigned int num = 0;
	unsigned int u;

	if (n < 0)
		u = num * -1;
	else
		u = n;

	while (u != 0)
	{
		u /= 10;
		num++;
	}
	return (num);
}
