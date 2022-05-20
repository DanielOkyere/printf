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
	const char *ptr;
	int index = 0;

	va_start(args, format);

	while (format[index] != '\0')
	{
		if (format[index] != '%')
			_putchar(format[index]);
		else
		{
			switch (format[index + 1])
			{
			case 'c':
				_putchar(va_arg(args, int));
				index++;
				break;
			case 's':
				ptr = va_arg(args, char *);
				while (*ptr != '\0')
				{
					_putchar(*ptr);
					ptr++;
				}
				break;
			case 'd':
				_putchar(va_arg(args, int));
				break;
			default:
				_putchar(format[index]);
				index++;
				break;
			}
		}
		index++;
	}
	va_end(args);
	return (0);
}
