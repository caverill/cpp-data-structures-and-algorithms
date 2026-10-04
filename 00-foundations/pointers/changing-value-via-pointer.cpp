#include <iostream>

using namespace std;

int main()
{

    int num = 50;
    int *num_ptr = &num;

    cout << "Number value: " << num << endl;
    cout << "Number address: " << num_ptr << endl;

    *num_ptr = 99;

    cout << "New value of number: " << num << endl;

}
