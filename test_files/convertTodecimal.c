#include "main.h"

long long convertTodecimal(int Number, int base)
{
	int decimalNumber = 0, i = 0;

	while(Number != 0)
	{
		decimalNumber += (Number%10) * _pow(base, i);
		++i;
		Number/=10;
	}
	i = 1;

	return decimalNumber;
}
