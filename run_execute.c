#include "shell.h"

/**
 * execute - execute a program
 * @data: data of the program
 * Return: 0 if success, -1 if fail
 */

int execute(data_of_program *data)
{
	int retval = 0, status;
	pid_t pidd;

	retval = builtins_list(data);
	if (retval != -1)
		return (retval);


	retval = find_program(data);
	if (retval)
	{
		return (retval);
	}
	else
	{
		pidd = fork();
		if (pidd == -1)
		{
			perror(data->command_name);
			exit(EXIT_FAILURE);
		}
		if (pidd == 0)
		{
			retval = execve(data->tokens[0], data->tokens, data->env);
			if (retval == -1) /* if error when execve*/
				perror(data->command_name), exit(EXIT_FAILURE);
		}
		else
		{
			wait(&status);
			if (WIFEXITED(status))
				errno = WEXITSTATUS(status);
			else if (WIFSIGNALED(status))
				errno = 128 + WTERMSIG(status);
		}
	}
	return (0);
}
