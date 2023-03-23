#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the chracter c stdout
 * @c:The character to print
 *
 * Return on success 1.
 *        on error , -1 is reyurned. and erno is set appropri ately.
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
