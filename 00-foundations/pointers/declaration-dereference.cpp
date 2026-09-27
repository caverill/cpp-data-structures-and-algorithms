#include <iostream>

using namespace std;

int main()
{

    int value = 100;
    int* ptr = &value;


    cout << "Value address: " << ptr << endl;
    cout << "Integer stored in value: " << *ptr << endl;
    
}
