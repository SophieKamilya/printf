#include "main.h"

/**
 * _printf - printf
 * @form: const char
 * Return: lenght
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int len = 0, i = 0;

	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				i++;
				len += dic_num(va_arg(arg, int));
			}
			if (format[i] == 'c')
			{
				i++;
				len += print_char(va_arg(arg, int));
			}
			if (format[i] == 's')
			{
				i++;
				len += print_str(va_arg(arg, char *));
			}
			if (format[i] == '%')
			{
				i++;
				_putchar('%');
				len++;
			}
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(arg);
	return (len);
}
