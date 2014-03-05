#include "structfunctions.h"

double Distance(POINT* a)
{
	double temp = 0.0;
	for (unsigned char i = 0; i < 3; i++)
	{
		temp += (*a).x[i] * (*a).x[i];
	}
	return sqrt(temp);
}

int Comp(const void *a, const void *b)
{
	double res = Distance((POINT*)a) - Distance((POINT*)b);
	if (res>0)
		return 1;
	if (res == 0)
		return 0;
	return -1;
}

int CompZ(const void *a, const void *b)
{
	double res = ((POINT*)a)->x[2] - ((POINT*)b)->x[2];
	if (res>0)
		return 1;
	if (res == 0)
		return 0;
	return -1;
}
