#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _num - check - string there are digit
 * @s: param 1
 *
 * Return: Always 0 (Success)
 */

int _num(char *s)
{
	unsigned int len;

	len = 0;
	while (len < strlen(s)) /*count string*/

	{
		if (!isdigit(s[len]))
		{
			return (0);
		}
		len++;
	}
	return (1);
}


/**
 * main - adds positive numbers
 * @argc: args count
 * @argv: args
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int len_;
	int s_t;
	int sum = 0;

	len_ = 1;
	while (len_ < argc) /*Goes through the whole array*/
	{
		if (_num(argv[len_]))
		{
			s_t = atoi(argv[len_]);
			sum += s_t;
		}

		else
		{
			printf("Error\n");
			return (1);
		}
		len_++;
	}
	printf("%d\n", sum);
	return (0);
}
