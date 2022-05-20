#include "main.h"
#include <stdarg.h>
/**
 * _printf - mimics printf function
 * @format: string to print out format
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;
	int index = 0, display_count = 0;

	va_start(args, format);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			display_count += get_action(format[index + 1], &args);
			display_count++;
		}
		else
		{
			_putchar(format[index]);
			display_count++;
		}
	}
	va_end(args);
	return (display_count);
}
