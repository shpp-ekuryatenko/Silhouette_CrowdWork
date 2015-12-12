/*******************************************************
 * File: Kuryatenko.h
 * -------------------
 *
 *******************************************************/

#ifndef Kuryatenko_Included
#define Kuryatenko_Included

#include "gbufferedimage.h"


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

/* Function: shrinkSilhouettes
 * ------------------------
 * - filters param image
 * - finds unions on the image,
 * - checks if this unions proportions
 *   satisfy human  silhouette proportion
 * - shows obtained humans quantity
 * - due to unions sizes and param koef
 *   shrink human silhouette -
 *   erases its perimetr
 * - secondary checks for human proportions
 *   and print obtained humans quantity
 *
 * @param inputImg  user image
 * @param inputKoef shrinking koef -
 *                  shows level of
 *                  image humans shrinkig
 *                  due to human size
 */
void shrinkSilhouettes(GBufferedImage* inputImg, int inputKoef);



#endif
