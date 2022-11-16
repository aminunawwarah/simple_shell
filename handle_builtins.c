#include "shell.h"

/**
* handle_builtin - handles the running of built-in functions
* @command: entered commands
* @line: input read from the standard input
*
* Return: 1 if success otherwise 0
*/
int handle_builtin(char **command, char *line)
{
	struct builtin builtin = {"env", "exit"};

	if (_strcmp(*command, builtin.env) == 0)
	{
		print_env();
		return (1);
	}
	else if (_strcmp(*command, builtin.exit) == 0)
	{
		exit_cmd(command, line);
		return (1);
	}
	return (0);
}

