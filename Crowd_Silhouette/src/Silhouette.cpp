#include <iostream>
#include <stdlib.h>
#include "queue.h"
#include <Vector>
#include "gbufferedimage.h"
#include "filelib.h"

//#include "legsCounter.cpp"
#include "Kuryatenko.h"
#include "Prihozhenko.h"

using namespace std;

/* img - main program image  */
GBufferedImage* userImage;

/* Function: adjustMainWindow()  - Modified:
 * Improved console window view
 * ----------------------------
 * Makes main program preparations - loads image, sets
 * main global variables */
void adjustMainWindow(GWindow& gw, string sourceFileName){
    userImage = new GBufferedImage(1000,1000,0);
    userImage->load(sourceFileName);
    int imgWidth = userImage->getWidth();
    int imgHeight = userImage->getHeight();
    string title = "Silhouette";
    setConsoleWindowTitle(title);
    setConsoleLocation(imgWidth, 0);
    setConsoleSize(500, 400);
    gw.setCanvasSize(imgWidth,imgHeight);
    gw.add(userImage);              //To show objects discovered as not human
}

int main()
{
    string sourceFileName = "st2.jpg";
    GWindow gw;
    adjustMainWindow(gw, sourceFileName);

    cout << "------------------KURYATENKO PROCESS------------------" << endl;
    shrinkSilhouettes(userImage, 30);

    cout << "------------------PRIHOZHENKO PROCESS------------------" << endl;
    findObjects(userImage);
    prihozhenkoProcess();

    return 0;
}
