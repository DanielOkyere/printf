#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

typedef struct s_flags
{
    int plus;
    int space;
    int hash;
} t_flags;


typedef struct printHandler
{
    char c;
    int (*f)(va_list args, t_flags *flags);
} ph;

int select_flag(char s, t_flags *f);
int (*_select_action(char c))(va_list,t_flags *);
int _printchar(va_list args, t_flags *flags);
int _print_int(va_list args, t_flags *flags);
int _print_str(va_list args, t_flags *flags);
int _print_bin(va_list args, t_flags *flags);
int _print_hex(va_list args, t_flags *flags);
int _print_hex_big(va_list args, t_flags *flags);
int print_rev(va_list args, t_flags *flags);
int print_octal(va_list args, t_flags *flags);
int _print_unsigned(va_list args, t_flags *flags);
int _putchar(char c);
int _printf(const char * const format, ...);
char *convert(unsigned long int num, int base, int lowercase);
int _puts(char *str);
void print_number(int n);
int count_digit(int n);
#endif
