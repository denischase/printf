#include "main.h"

int print_decimal(int value)
{
	int count = 0;

	/*print '-' for negative numbers */
	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}

	/*first rmove the last digit of num & prt digit*/
	if (value/10)
	{
		count += print_decimal(value/10);
	}
		count += _putchar((value%10) + '0');
	return (count);
}
