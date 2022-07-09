#include "main.h"
/**
 * main - main block
 * Description: print _putchar followed on a new line
 * Return: always 0
 */
int main(void)
{
	int i = 0;

	char text[] = "_putchar";

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
