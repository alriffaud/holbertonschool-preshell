#include <stdio.h>

/**
 * main - This program prints all arguments it receives.
 * @argc: Is the number of arguments passed to the program.
 * @argv: Is a one-dimensional array of strings.
 *
 * Return: Always 0;
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 1; argv[i] != NULL; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
