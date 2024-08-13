#include <stdio.h>
#include <stdarg.h>

/**
 *
 * main - header
 * @ac: count arguments
 * @av: pointer
 *
 */

int main(int ac, char **av)
{
	if (av == NULL)
	{
		return (0);
	}

	for ( ; *av; *av++)
	{
		printf("%s ", *av);
	}
	printf("\n");
	return (0);
}
