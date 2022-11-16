#include "shell.h"

/**
* _putchar - puts the character c to
* the standard output
* @c: character to put
*
* Return: On success 1 otherwise -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_s - displays a string
* @s: string to be displayed
*
* Return: number of characters displayed
*/
int print_s(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}

