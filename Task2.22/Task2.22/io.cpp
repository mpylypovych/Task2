#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#ifndef IO
#include "io.h"
#define IO
#endif

#ifndef STRUCT
#include "struct.h"
#define STRUCT
#endif
#include <string.h>
double GetDouble()
{
	char cBuffer[102];
	char cTempBuffer[10];
	double x = 0.0;


	while (true)
	{
		if (!fgets(cBuffer, 102, stdin))
		{
			printf("Read error. Try again\n");
			continue;
		}
		if (sscanf(cBuffer, "%lf%s", &x, cTempBuffer) != 1)
		{
			printf("Wrong number.. try again\n");
			continue;
		}
		else if (strlen(cBuffer) > 100)
		{
			printf("Input is too long. Try again\n");
			while (getchar() != '\n')
			{
			}
			continue;
		}
		break;
	}
	
	return x;
}

unsigned int GetUInt()
{
	char cBuffer[10];
	char cTempBuffer[10];
	unsigned int x = 0;


	while (true)
	{
		if (!fgets(cBuffer, 8, stdin))
		{
			printf("Read error. Try again\n");
			continue;
		}
		if (sscanf(cBuffer, "%d%s", &x, cTempBuffer) != 1)
		{
			printf("Wrong input. Try again\n");
			continue;
		}
		else if ((strlen(cBuffer) > 5) || (x>1000))
		{
			printf("Wrong input. Try again\n");
			if (strlen(cBuffer) > 5)
			{
				while (getchar() != '\n')
				{
				}
			}
			continue;
		}
		break;
	}
	return x;
}

void PrintPoint(POINT* a)
{
	for (unsigned char i = 0; i < 3; i++)
	{
		printf("%f ", (*a).x[i]);
	}
	printf("\n");
}