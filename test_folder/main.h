#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct types - specifies structure for printf
 * @p: pointer to characteres 
 * @func : function pointer
 */
typedef struct types
{
	char p;
	int (*func)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int printc(va_list l);
int print_string(va_list s);
int (*cmp_func(const char a))(va_list);
int print_n(va_list n);

#endif
