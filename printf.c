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

	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			display_count++;
		}
		else
		{
			switch (format[index + 1])
			{
			case 'c':
				_putchar(va_arg(args, int));
				index++;
				display_count++;
				break;
			case 's':
				display_count += _puts(va_arg(args, char *));
				break;
			case 'd':
				_putchar(va_arg(args, int));
				display_count++;
				break;
			default:
				_putchar(format[index]);
				index++;
				display_count++;
				break;
			}
		}
		index++;
	}
	va_end(args);
	return (display_count);
}
