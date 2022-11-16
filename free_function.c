#include "shell.h"

/**
* free_buffers - deletes buffers
* @buf: buffer to be deleted
*
* Return: returns nothing
*/
void free_buffers(char **buf)
{
	int i = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[i])
	{
		free(buf[i]);
		i++;
	}
	free(buf);
}

