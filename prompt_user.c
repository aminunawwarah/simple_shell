#include "shell.h"

/**
* prompt_user - shows $ when ready to accept
* input from the user
* 
* Return: returns nothing
*/
void prompt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}

