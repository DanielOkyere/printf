#include "main.h"
#include <stdarg.h>
/**
* _print_str - prints string to std output
* @args: char from argument
* @flags: Identifier
* Return: int
*/
int _print_str(va_list args, t_flags *flags)
{
	char *s = va_arg(args, char *);

	(void)flags;
	if (!s)
		s = "(null)";
	return (_puts(s));
}
