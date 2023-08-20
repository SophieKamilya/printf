include "main.h"

/**
 *print_str - %s
 *@s: str
 *Return: lenght
 */

int print_str(char *s)
{
	int i, len = 0;

	if (s == NULL)
		return (len);
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		len++;
	}
	return (len);
}
