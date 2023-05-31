#include <stdio.h>
#include "main.h"

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
	int len_inbuilt, len_hmd;

        printf("please print me the sentence stored in variable a inbuilt: %s nicely\n", a);
        printf("%%please print me the letter stored in variable b inbuilt: %c nicely\n", b);
        _printf("-----------------------------------------------------\n");
        _printf("please print me the sentence stored in variable a: %s nicely\n", b);
        _printf("%%please print me the letter stored in variable b: %c nicely\n", a);

	len_inbuilt = printf("jesus %c king of kings. %s\n", b, a);
	len_hmd = _printf("jesus %c king of kings. %s\n", b, a);
	printf("length of inbuilt printf; %d\n", len_inbuilt);
	printf("lenght of home made printf: %d\n", len_hmd);
        return (0);
}
