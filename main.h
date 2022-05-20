#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
int get_action(char c, va_list *ap);

int exponent(int x, int y);
int p_int(int);
int _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);

int mkstring(va_list *);
int mkchar(va_list *);
int mkint(va_list *);

/**
 * struct flag - flag object
 * @letter: flag char
 * @prnt: print function pointer
 * Descriptions: contains flag letter and corresponding prnt funct
 */
typedef struct flag
{
	char letter;
	int (*prnt)(va_list *);
} find_action;
#endif
