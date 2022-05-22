#include "main.h"
#include <stdarg.h>

/**
* _printchar - prints character using args and flags
* @args: arguments of type va_list
* @flags: identifier of type t_flags
* Return: int
*/
int _printchar(va_list args, t_flags *flags)
{
	(void)flags;
	_putchar(va_arg(args, int));
	return (1);
}
