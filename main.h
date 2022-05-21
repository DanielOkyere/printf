#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>

int exponent(int x, int y);
int (*_select_action(char c))(va_list);
int _printchar(va_list args);
int _print_int(va_list args);
int _print_str(va_list args);
int _putchar(char c);
int _printf(const char * const format, ...);
#endif
