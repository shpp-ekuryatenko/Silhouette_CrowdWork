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

int main()
{
    string sourceFileName = "st2.jpg"; //

    userImage = new GBufferedImage(1000,1000,0);
    userImage->load(sourceFileName);
    GWindow gw;
    int imgWidth = userImage->getWidth();
    int imgHeight = userImage->getHeight();
    gw.setCanvasSize(imgWidth,imgHeight);
    gw.add(userImage);

    /* New function -------------------- */
     shrinkSilhouettes(userImage, 30);
    /* --------------------------------- */

    findObjects(userImage);

    //cout << "Objects found: " << objects.size() << endl;




    return 0;
}
