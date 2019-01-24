#include "complex.h"

complex_t mul(complex_t x, complex_t y)
{
	complex_t t;
	t.a = x.a-y.a - x.b*y.b;
	t.b = x.a-y.b - x.b*y.a;
}
