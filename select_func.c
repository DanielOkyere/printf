#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
* _select_action - selects specific action to perform on string
* @s: char of the string
* Return: pointer to function or NULL
*/
int (*_select_action(char s))(va_list, t_flags *)
{
	ph func_arr[] = {
		{'i', _print_int},
		{'s', _print_str},
		{'c', _printchar},
		{'d', _print_int},
		{'x', _print_hex},
		{'X', _print_hex_big},
		{'b', _print_bin},
		{'o', print_octal},
		{'u', _print_unsigned},
		{'r', print_rev},
		{'%', _printchar},
		{'R', _print_rot13},
		{'S', _print_bigS},
		{'p', _print_address}
	};

	register int i;

	for (i = 0; i < 14; i++)
	{
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	}
	return (NULL);
}
