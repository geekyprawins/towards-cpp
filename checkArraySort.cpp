#include <iostream>

using namespace std;

bool isSortedArray(int arr[], int n)
{

    if (n == 1)
    {
        return true;
    }

    if ((arr[0] < arr[1]) && isSortedArray(arr + 1, n - 1))
    {
        // arr+1 shifts the pointer
        return true;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};

    cout << isSortedArray(arr, 4) << endl;

    return 0;
}