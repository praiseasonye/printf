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
	_printf("Let's print a simple. \n");
	printf("Let's print a simple. \n");

	_printf("%c\n", 'S');
	printf("%c\n", 'S');

	_printf("A char inside a sentence: %c. Did it work? \n", 'F');
	printf("A char inside a sentence: %c. Did it work? \n", 'F');

	_printf("Let's see if the cast if correctly done: %c. Did it work?\n", 48);
	printf("Let's see if the cast if correctly done: %c. Did it work?\n", 48);

	_printf("%s", "This sentence is retrieved from va_args!\n");
	printf("%s", "This sentence is retrieved from va_args!\n");

	_printf("complete the sentence: You %s nothing, jon snow.\n", "know");
	printf("complete the sentence: You %s nothing, jon snow.\n", "know");

	/*_printf("(Complete the sentence: You %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');*/
	printf("(Complete the sentence: You %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
        return (0);
}

