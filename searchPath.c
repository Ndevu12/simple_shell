#include "main.h"

/**
 * search_path - search file between the path
 * @command: cmd
 * Return: cmd path
 */

char *search_path(char *command)
{
	char *path = _getenv("PATH"), *path_cpy;
	char **path_split;
	char *path_concat = NULL;
	int i = 0, path_len = 0;
	struct stat info;

	if (stat(command, &info) == 0)
		return (command);

	path_cpy = malloc(_strlen(path) + 1);

	path_cpy = _strcpy(path_cpy, path);
	path_split = _split(path_cpy, ":");
	while (path_split[i])
	{
		path_len = _strlen(path_split[i]);
		
		/* Allocate memory for path_concat */
		if (path_split[i][path_len - 1] != '/')
		{
			/* +2 for '/' and null terminator */
			path_concat = malloc(path_len + _strlen(command) + 2);
			if (!path_concat)
				return (NULL);
				
			/* Copy path to path_concat */
			_strcpy(path_concat, path_split[i]);
			/* Add slash to path_concat */
			_strcat(path_concat, "/");
			/* Add command to path_concat */
			_strcat(path_concat, command);
		}
		else
		{
			/* +1 for null terminator */
			path_concat = malloc(path_len + _strlen(command) + 1);
			if (!path_concat)
				return (NULL);
				
			/* Copy path to path_concat */
			_strcpy(path_concat, path_split[i]);
			/* Add command to path_concat */
			_strcat(path_concat, command);
		}

		if (stat(path_concat, &info) == 0)
			break;

		free(path_concat);
		path_concat = NULL;
		i++;
	}

	free(path_cpy);

	if (!path_split[i])
	{
		free(path_split);
		return (NULL);
	}

	free(path_split);
	return (path_concat);
}
