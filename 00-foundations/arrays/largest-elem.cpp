#include <iostream>

using namespace std;

int find_largest(int nums[])
{

    int largestElem = nums[1];

    for (int i = 0; i < 10; i++)
    {
        if (largestElem < nums[i]) {
            largestElem = nums[i];
        }
    }

    return largestElem;
}

int main()
{
    srand(time(0));

    int nums[10];

    for (int i = 1; i <= 10; i++) {

        int randNum = rand() % 101;
        nums[i] = randNum;

        cout << nums[i] << endl;
    }

    int largest = find_largest(nums);
    cout << "Largest number: " << largest << endl;

}
