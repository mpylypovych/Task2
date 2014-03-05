/**
* @file		structfunctions.h
* @brief	Functions which work with POINT structs -- getting distance,
*			comparing 2 POINTS.
* @Author	Maksym Pylypovych
* @date		03.05.2014
*/

#ifndef _STRUCTFUNCTIONS_H_
#define _STRUCTFUNCTIONS_H_

#ifndef _MATH_H_
#include <math.h>
#define _MATH_H_
#endif // _MATH_H_

#include "struct.h"

/**
* @brief This function calculates the distance from (0,0,0) to POINT
* @param [in] a -- POINT, distance to which is calculated
* @return double
*/
double Distance(POINT* a);

/**
* @brief This is a compare function for qsort
* @param [in] a -- first POINT to compare
* @param [in] b -- second POINT to compare
* @return int
*/

int Comp(const void *a, const void *b);

/**
* @brief This is a compare function for second qsort -- used when looking for points with equal z-coordinate
* @param [in] a -- first POINT to compare
* @param [in] b -- second POINT to compare
* @return int
*/
int CompZ(const void *a, const void *b);

#endif // _STRUCTFUNCTIONS_H_