#include <iostream>

using namespace std;

/*Pass By value*/
void addTenToNumberValue(unsigned short number)
{
    number = number + 10;
}

/*Pass By Reference*/
void addTenToNumberReference(unsigned short &number)
{
    number = number + 10;
}

int main()
{
    unsigned short myNumber = 10;

    addTenToNumberReference(myNumber);
    cout << "Value after call by value: " << myNumber << endl;

    return 0;
}
