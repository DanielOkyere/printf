#include "main.h"
#include <stdarg.h>

/**
* _print_bin - prints binary
* @args: arguments
* @flags: identifier
* Return: int
*/
int _print_bin(va_list args, t_flags *flags)
{
	unsigned int n = va_arg(args, unsigned int);
	char *str = convert(n, 2, 0);

	(void)flags;

	return (_puts(str));
}

/**
* _print_hex - prints hexagonal values in small letters
* @args: arguments
* @flags: identifier
* Return: int
*/
int _print_hex(va_list args, t_flags *flags)
{
	unsigned int n = va_arg(args, unsigned int);
	char *str = convert(n, 16, 0);

	int count = 0;


	if (flags->hash == 1 && str[0] != '0')
		count += _puts("0x");

	count += _puts(str);

	return (count);
}

/**
* _print_hex_big - prints hexagonal values in capital letters
* @args: arguments
* @flags: identifier
* Return: int
*/
int _print_hex_big(va_list args, t_flags *flags)
{
	unsigned int n = va_arg(args, unsigned int);
	char *str = convert(n, 16, 1);
	int count = 0;

	if (flags->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
* print_octal - prints octal values
* @args: arguments
* @flags: identifier
* Return: int
*/
int print_octal(va_list args, t_flags *flags)
{
	unsigned int n = va_arg(args, unsigned int);
	char *str = convert(n, 8, 0);
	int count = 0;

	if (flags->hash == 1 && str[0] != '0')
		count += _puts("0");
	count += _puts(str);
	return (count);
}
