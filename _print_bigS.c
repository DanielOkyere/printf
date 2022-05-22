#include "main.h"
/**
 * _print_bigS - prints the hexagonal character in Capital
 * @args: argument list
 * @flags: flags
 * Return: int
 */
int _print_bigS(va_list args, t_flags *flags)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(args, char *);

	(void)flags;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}
