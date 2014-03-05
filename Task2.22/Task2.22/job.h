/**
* @file		job.h
* @brief	High-level functions -- input, solving the task and output.
* @Author	Maksym Pylypovych
* @date		03.05.2014
*/

#ifndef _JOB_H_
#define _JOB_H_


#ifndef _STDLIB_H_
#include <stdlib.h>
#define _STDLIB_H_
#endif // _STDLIB_H_

#include "struct.h"

#ifndef _IO_H_
#include "io.h"
#define _IO_H_
#endif // _IO_H_


#include "structfunctions.h"

/**
* @brief This function gets user input and sets values to variables
* @param [out] points -- stores inputted array of POINT elements
* @param [out] n -- stores the number of POINT elements in points array
* @return char -- 0, if everything is ok, 1 otherwise
*/
char Initialize(POINT** points, unsigned* n);

/**
* @brief This function sorts array, outputs it and looks for desired points
* @param [in] points -- stores inputted array of POINT elements
* @param [in] n -- stores the number of POINT elements in points array
* @return void
*/
void DoJob(POINT* points, const unsigned* const n);

/**
* @brief This function prints welcome message
* @return void
*/
void Welcome(void);

#endif // _JOB_H_