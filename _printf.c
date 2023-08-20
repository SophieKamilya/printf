#include "main.h"

/**
 * _printf - printf
 * @form: const char
 * Return: lenght
 */
int _printf(const char *form, ...)
{
	va_list arg;
	int len = 0, i = 0;

	va_start(arg, form);
	while (form[i] != '\0')
	{
		if (form[i] == '%')
		{
			i++;
			if (form[i] == 'd' || form[i] == 'i')
			{
				i++;
				len += dic_num(va_arg(arg, int));
			}
			if (form[i] == 'c')
			{
				i++;
				len += print_char(va_arg(arg, int));
			}
			if (form[i] == 's')
			{
				i++;
				len += print_str(va_arg(arg, char *));
			}
			if (form[i] == '%')
			{
				i++;
				_putchar('%');
				len++;
			}
		}
		_putchar(form[i]);
		len++;
		i++;
	}
	va_end(arg);
	return (len);
}
