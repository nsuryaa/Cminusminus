#include <iostream>

using namespace std;

class CGreet
{
public:
    void sayHello()
    {
        cout << "Hello from C++ Class!" << endl;
    }
};

int main()
{
    CGreet obj_greet;
    obj_greet.sayHello ();
    return 0;
}
