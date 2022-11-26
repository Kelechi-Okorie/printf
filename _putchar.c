#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	static char buf[1024];
	static int n;

	if (c == -1 || n > 1024)
	{
		write(1, &buf, n);
		n = 0;
	}

	if (c != -1)
	{
		buf[n] = c;
		n++;
	}

	return (1);
}
