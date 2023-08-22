#include "main.h"

/**
 * lenght_num - count how many numbers
 * @x: int
 * Return: len of number
 */
int lenght_num(int num)
{
	int i = 0;

	while (num > 0)
	{
		i++;
		num /= 10;
	}
	return (i);
}

/**
 * print_this_number - print the number
 * @arr: array of numbers
 * @neg: negative flag
 * Return: len printed
 */
int print_this_number(int *arr, int neg, int rep)
{
	int i, len = 0;

	if (neg == 1)
	{
		_putchar('-');
		len++;
	}
	for (i = rep - 1; i >= 0; i--)
	{
		_putchar('0' + arr[i]);
		len++;
	}
	return (len);
}

/**
 * dic_num - print integer %d
 * @dic: int
 * Return: lenght
 */
int dic_num(int dic)
{
	int *arr, neg = 0;
	int len = 0, i = 0;
	int num, rep = 0;

	if (dic == 0)
	{
		_putchar('0');
		return (1);
	}
	if (dic < 0)
	{
		neg = 1;
		dic *= -1;
	}
	num = dic;
	rep = lenght_num(num);
	arr = (int *)malloc(sizeof(int) * rep);
	while (num > 0)
	{
		arr[i] = num % 10;
		num /= 10;
		i++;
	}
	len = print_this_number(arr, neg, rep);
	free(arr);
	return (len);
}
