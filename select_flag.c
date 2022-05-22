#include "main.h"
/**
* select_flag - selects the required flag
* @s: char of flag
* @f: pointer to function
* Return: int
*/
int select_flag(char s, t_flags *f)
{
	int i = 0;

	switch (s)
	{
	case '#':
		f->hash = 1;
		i = 1;
		break;
	case '+':
		f->plus = 1;
		i = 1;
		break;
	case ' ':
		f->space = 1;
		i = 1;
		break;
	}
	return (i);
}
