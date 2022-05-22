#include "main.h"
/**
 * _print_address - prints the address of variable
 * @args: arguments
 * @flags: flags
 * Return: int
 */
int _print_address(va_list args, t_flags *flags)
{
	char *ptr;
	unsigned long int ptr_num = va_arg(args, unsigned long int);

	register int i = 0;

	(void)flags;

	if (!ptr_num)
		return (_puts("(nil)"));
	ptr = convert(ptr_num, 16, 0);
	i += _puts("0x");
	i += _puts(ptr);

	return (i);
}
