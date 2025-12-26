#include <iostream>
using namespace std;

int main()
{
    unsigned short usVarX = 10;

    unsigned short *p = &usVarX;

    *p = 20;

    cout << "Value of x now is : " << usVarX << endl;

    return 0;
}
