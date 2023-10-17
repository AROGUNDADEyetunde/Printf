#include "main.h"
/**
 * _putchar - comand to print to stdout
 * @c: what to print
 * Return: Success is 1, else -1 in cases of error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
