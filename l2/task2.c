#include <math.h>

double f(double x)
{
	return x <= 0 ? fabs(-pow(x, 2) + 3 * x + 8) : sqrt(pow(x, 2) + (1 / x));
}