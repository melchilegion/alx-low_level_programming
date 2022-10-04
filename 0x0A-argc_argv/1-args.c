#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: Array that contains the program command line arguments
 * Return: o -Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
