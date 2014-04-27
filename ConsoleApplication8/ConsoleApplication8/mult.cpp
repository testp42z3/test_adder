#include "mult.h"

int mult(int a, int b, int c)
{
	int res;
	res=a*b*c;
	return res % MODULE;
}