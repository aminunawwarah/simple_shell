#include "shell.h"

/**
* exit_cmd - takes care of exit command
* @command: entered command
* @line: input from the standard input
*
* Return: no return
*/
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}

