#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - mimics printf function
 * @format: string to print out format
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;
	int index = 0, display_count = 0, (*func)(va_list);

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
        if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while(format[index] != '\0')
	{
        if (format[index] == '%' && format[index + 1] != '%')
        {
            func = _select_action(format[index + 1]);
            if (func != NULL)
            {
                display_count += func(args);
                index++;
            }
        }
        else
        {
            display_count += _putchar(format[index]);
        }
        index++;
	}
	va_end(args);
	return (display_count);
}
