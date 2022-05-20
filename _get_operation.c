#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * _get_action - gets action to perform
 * @c: specifief
 * @ap: va_list to print
 * Return: number of chars printed
 */
int get_action(char c, va_list *ap)
{
	int index;
	find_action flags[] = {
		{'c', mkchar},
		{'s', mkstring},
		{'d', mkint},
		{'i', mkint},
		{'\0', NULL}
	};

	for (index = 0; flags[index].letter != '\0'; index++)
	{
		if (flags[index].letter == c)
			return (flags[index].prnt(ap));
	}
	if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	return (0);
}
