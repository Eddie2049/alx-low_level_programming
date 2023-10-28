#include <stdio.h>
#include "main.h"

/**
 * main - entry. print the number of arguments passed to the program
 * @argc: no. of args
 * @argv: array of args
 *
 * Return: int. Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}
