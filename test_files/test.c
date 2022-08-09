#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
	int n = _printf("%u\n", 20);
	printf("\nn = %d \n", n);

	return (0);
}
