#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 *
 */

int main(void)
{
	char *a = "I am hungry";
	char b = 'd';

	printf("please print me the sentence stored in variable a inbuilt: %s nicely\n", a);
	printf("%%please print me the letter stored in variable b inbuilt: %c nicely\n", b);
	_printf("-----------------------------------------------------\n");
	_printf("%%please print me the sentence stored in variable a: %s nicely\n", a);
	_printf("please print me the letter stored in variable b: %c nicely\n", b);

	return (0);
}
