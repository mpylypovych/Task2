#ifndef _JOB_H_
#include "job.h"
#define _JOB_H_
#endif // _JOB_H_

char Initialize(POINT** points, unsigned* n)
{
	printf("Please enter number of points(1-1000)\n");
	*n = GetUInt();
	*points = (POINT*)malloc((*n)*sizeof(POINT));
	if (!points)
	{
		printf("Something went wrong... Terminating.");
		return 1;
	}
	printf("Please enter each coordinate in a seperate line\n");
	for (unsigned i = 0; i < *n; ++i)
	{
		printf("Point %d:\n", i + 1);
		for (unsigned j = 0; j < 3; ++j)
		{
			(*points)[i].x[j] = GetDouble();
		}
	}
	return 0;
}

void DoJob(POINT* points, const unsigned* const n)
{
	qsort(points, *n, sizeof(POINT), Comp);
	printf("\nSorted array:\n");
	for (unsigned i = 0; i < *n; ++i)
	{
		PrintPoint(points + i);
	}
	qsort(points, *n, sizeof(POINT), CompZ);
	if (*n>2)
	{
		for (unsigned int i = 0; i < *n - 2; ++i)
		{
			if ((points[i].x[2] == points[i + 1].x[2]) && (points[i + 2].x[2] == points[i + 1].x[2]))
			{
				printf("\nThere are 3 points with equal z-coordinates:\n");
				PrintPoint(points + i);
				PrintPoint(points + i + 1);
				PrintPoint(points + i + 1);
				return;
			}
		}
	}
	printf("\nThere are no 3 points with equal z-coordinates\n");
}

void Welcome()
{

	printf("Maksym Pylypovych. 2014\nWelcome!\n");
	printf("This program will sort an array of points in 3-dimensional Euclidean space ");
	printf("and will check if there are 3 or more points with same z - coordinate.Please, follow the instructions\n");
	printf("\n***\n\n");
}

