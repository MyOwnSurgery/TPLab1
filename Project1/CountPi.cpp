#define LIB_EXPORT

#include "countPi.h"
#include <string>
double countPi(int power)
{
	unsigned long div = 1;
	double pi = 0.0;
	double eps = pow(10, -power);
	unsigned long i = 0;
	double el = 4; ;
	while (el > eps)
	{
		el = (double)4 / div;
		if (i % 2 == 0)
			pi += el;
		else pi -= el;
		div += 2;
		i++;
	}
	return pi;

}