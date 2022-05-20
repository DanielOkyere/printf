#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int mkstring(va_list *ap)
{
	return (_puts(va_arg(*ap, char *)));
}

int mkint(va_list *ap)
{
	return (p_int(va_arg(*ap, int)));
}

int mkchar(va_list *ap)
{
	return (_putchar(va_arg(*ap, int)));
}
