#include "main.h"

int convertTobase(int Number, int base)
{
	int arr[32], i = 0, count = 0;

	while (Number >= base)
	{
		arr[i] = Number%base;
		Number = Number/base;
		i++;
	}
	arr[i] = Number;

	for (i; i>=0; i--)
	{
		count += _putchar(arr[i] + '0');
	}
	return (count);
}
