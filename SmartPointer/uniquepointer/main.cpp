#include <iostream>
#include "smartpointer.h"
using namespace std;

int main()
{
    UniquePointer<int>obj(5);
    obj.displayData();
    cout << "Hello World!" << endl;
    return 0;
}
