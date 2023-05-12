#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the size of the argv array
 * @argv: an array of size argc
 *
 * Return: always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
