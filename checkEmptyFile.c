#include "main.h"
/**
 * empty_line - check for empty file
 * @buff: store
 * Return: int
 */
int empty_line(char *buff)
{
	int i;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] != ' ')
			return (0);
	}
	return (1);
}
