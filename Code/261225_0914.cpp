#include <iostream>

using namespace std;

int main()
{
    unsigned short usVariable = 10;

    unsigned short &usReferenceVar = usVariable;

    usReferenceVar = 20;

    cout << "usVariable = " << usVariable <<
            ", ReferenceVar = " << usReferenceVar << endl;

    return 0;
}
