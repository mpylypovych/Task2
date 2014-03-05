/**
* @file		io.h
* @brief	Functions for user input and output
* @Author	Maksym Pylypovych
* @date		03.05.2014
*/

#ifndef _IO_H_
#define _IO_H_


#ifndef _STDIO_H_
#include <stdio.h>
#define _STDIO_H_
#endif // _STDIO_H_


#include "struct.h"


/**
* @brief This function gets double from user input
* @return double
*/
double GetDouble(void);

/**
* @brief This function gets unsigned int from user input
* @return char -- 0, if everything is ok, 1 otherwise
*/
unsigned int GetUInt(void);

/**
* @brief This function prints coordinates of POINT a
* @param [in] a -- POINT to be outputted
* @return void
*/
void PrintPoint(POINT* a);

#endif // _IO_H_