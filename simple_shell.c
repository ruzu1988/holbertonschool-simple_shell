#include "shell.h"
/**
 * main - Entry point, command line interptreter
 *
 * Return: Always 0 on (Success), Error cases on (Failure).
 */
int main(void)
{
	char **args;
	char *input = NULL;
	size_t buffer_size = 0;
	int count = 0;
	int mode;

	while (1)
	{
		mode = isatty(STDIN_FILENO);
		if (mode)
			printf("#$ ");
		/* Reading the user input */
		if (getline(&input, &buffer_size, stdin) == -1)
		{
			free(input);
			break; /* Handling the eof (ctrl + D) */
		}
		count++;
		/* Trim trailing the newline */
		if (input[strlen(input)] == '\n')
			input[strlen(input)] = '\0';
		args = parse_input(input); /* Tokenize the user input */
		if (args == NULL)
		{
			free(input);
			continue;
		}
		if (args[0] != NULL)
		{
			if (strcmp(args[0], "exit") == 0)
			{
				free(input);
				free(args);
				break; /* Exits the shell program */
			}
			else if (find_or_execute_command(args) == -1)
				printf("./hsh: %d: %s: not found\n", count, args[0]);
		}
		free(args);
	}
	if (mode)
		printf("\n");
	return (0);
}
