#include "shell.h"
/**
 *checker- to see whether it is a built in function
 *@cmd: user input
 *@buf: line drived 
 *Return: 1 if command excuted 0 if cmd is not executed
 */
int checker(char **cmd, char *buf)
{
	if (handle_builtin(cmd, buf))
		return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}

