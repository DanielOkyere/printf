#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0;
	n = _printf("Hello %c World!\n", 'A');
	printf("%d\n",n);
	n = _printf("Hello %s !\n", "World");
	printf("%d\n",n);
	n = _printf("Hello %% !\n");
	printf("%d\n",n);
	n = printf("Hello %% !\n");
	printf("%d\n",n);
	return (0);
}
