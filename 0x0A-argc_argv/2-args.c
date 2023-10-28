#include "main.h"

/**
 * main - entry. prints all arguments it receives
 * @argc: no. of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int j;

	j = 0;
	while (j < argc)
	{
		printf("%s\n", argv[j]);
		j++;
	}
	return (0);
}
