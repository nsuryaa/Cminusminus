#include <iostream>

using namespace std;

int main()
{
    unsigned short usLocaltoMain = 10;
    unsigned short ulLoop = 0;

    if(usLocaltoMain > 5)
    {
        unsigned short usInsideIf = 20;

        cout << "Inside if-block: usLocaltoMain = " << usLocaltoMain
             << ", usInsideIf = " << usInsideIf << endl;
    }

    for(ulLoop = 0; ulLoop < 3; ulLoop++)
    {
        unsigned short usTempVar = (ulLoop * 10);

        cout << "usTempVar = " << usTempVar << endl;
    }

    return 0;
}
