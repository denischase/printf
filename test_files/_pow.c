#include "main.h"

long long int _pow(int base, int x)
{
	int result = 1;

	for (x; x>0; x--)
	{
		result = result * base;
	}
	return (result);
}
