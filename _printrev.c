#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* print_rev - prints argument in reverse
* @args: argument
* @flags: identifier
* Return: int
*/
int print_rev(va_list args, t_flags *flags)
{
	int i = 0, j;
	char *s = va_arg(args, char *);

	(void)flags;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
