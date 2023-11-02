#include "main.h"

/**
 * to_int - string to an integer
 * @s: string param
 *
 * Return: int
 */

int to_int(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;

			n = n * 10 + digit;

			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;

			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}



/**
 * main - entry, multiplies two numbers
 * @argc: param 1
 * @argv: param 2
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int res, num_1, num_2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = to_int(argv[1]);

	num_2 = to_int(argv[2]);

	res = num_1 * num_2;

	printf("%d\n", res);

	return (0);
}
