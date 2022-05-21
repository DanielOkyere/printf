#include <unistd.h>

/**
 * @brief putchar - writes the character c to stdout
 *
 * @param c
 * @return int
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
