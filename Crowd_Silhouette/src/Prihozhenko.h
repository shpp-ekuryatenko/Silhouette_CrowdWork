/*******************************************************
 * File: Prihozhenko.h
 * -------------------
 *
 *******************************************************/

#ifndef Prihozhenko_Included
#define Prihozhenko_Included

#include "gbufferedimage.h"

/* Declarations
 * -----------------------------------------------------------------------------------------*/
//Vector <Vector <Pnt>> objects;

void findObjects(GBufferedImage* userImg);

void prihozhenkoProcess(GBufferedImage* userImg);


#endif
