#include <stdio.h>
#include "complex.h"

int main()
{
	complex_t x = {1, 2};
	complex_t y = {2, 4};
	complex_t z = mul(x, y);
	printf("z = {%f, %f}\n", z.a, z.b);
}
