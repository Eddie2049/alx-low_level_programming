#include "main.h"

/**
 * main - entry point. Prints name of prog
 * @argc: no. of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
