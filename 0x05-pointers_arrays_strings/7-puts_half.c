#include "main.h"
/**
 * puts_half - puts half of int
 * @str: string to spliti
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{}
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
