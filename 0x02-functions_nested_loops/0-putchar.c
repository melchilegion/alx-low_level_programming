/**
 * File: 0-putchar.c
 * Author: Nyapson Melchisedec Danjuma
 */
#include "main.h"
/**
 * main - This prints _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char c[] = "_puchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
