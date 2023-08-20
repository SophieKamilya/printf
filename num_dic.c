#include "main.h"
#include <stdlib.h>

/**
 * lenght_num - count how many numbers
 * @x: int
 * Return: len of number
 */
int lenght_num(int x)
{
	int i = 0;

	while (x > 0)
	{
		i++;
		x /= 10;
	}
	return (i);
}

/**
 * print_this_number - print the number
 * @arr: array of numbers
 * @neg: negative flag
 * Return: len printed
 */
int print_this_number(int *arr, int neg)
{
	int i;

	if (neg == 1)
	{
		putchar('-');
		len++;
	}
	for (i = rep - 1; i >= 0; i--)
	{
		putchar('0' + arr[i]);
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
	int xx, rep = 0;

	if (x == 0)
	{
		putchar('0');
		return (1);
	}
	if (x < 0)
	{
		neg = 1;
		x *= -1;
	}
	xx = x;
	rep = lenght_num(xx);
	arr = (int *)malloc(sizeof(int) * rep);
	while (xx > 0)
	{
		arr[i] = xx % 10;
		xx /= 10;
		i++;
	}
	len = print_this_number(arr, neg);
	free(arr);
	return (len);
}
