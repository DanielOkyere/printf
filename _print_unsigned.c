#include "main.h"
#include <stdarg.h>

/**
* _print_unsigned - prints an unsigned value
* @args: arguments
* @flags: flags
* Return: int
*/
int _print_unsigned(va_list args, t_flags *flags)
{
	unsigned int n = va_arg(args, unsigned int);
	char *str = convert(n, 10, 0);
	int count = 0;

	(void)flags;
	count += _puts(str);
	return (count);
}
