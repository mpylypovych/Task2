#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif


#ifndef _STDLIB_H_
#include <stdlib.h>
#define _STDLIB_H_
#endif // _STDLIB_H_


#include "struct.h"
#include "io.h"


#ifndef _STRUCTFUNCTIONS_H
//#include "structfunctions.h"
#define _STRUCTFUNCTIONS_H_
#endif // _STRUCTFUNCTIONS_H_

#include "job.h"


int main()
{
	Welcome();
	unsigned n=0;
	POINT* points=NULL;

	if (!Initialize(&points, &n))
	{
		DoJob(points, &n);
		free(points);
	}
	system("pause");
	return 0;
}