/*******************************************************
 * File: Kuryatenko.h
 *
 *******************************************************/

#ifndef Kuryatenko_Included
#define Kuryatenko_Included

#include <iostream>
#include <stdlib.h>
#include <Vector>
#include "queue.h"
#include "set.h"

#include "gbufferedimage.h"
#include "filelib.h"
#include "simpio.h"



/* Declarations
 * -----------------------------------------------------------------------------------------*/

/* Global constatnts
 * -------------------
 * Typical colors values in programm */
int const WHITE = 0xffffff;
int const GREEN = 0x00ff00;
int const BLUE = 0x0000ff;
int const BLACK = 0x000000;
int const PERIMETR_COLOR = WHITE;
/* FILTER_COLOR_LIMIT - some koef to make start image biColor */
int const FILTER_COLOR_LIMIT = 4000000;


void shrinkSilhouettes(GBufferedImage* inputImg, int inputKoef);

#endif
