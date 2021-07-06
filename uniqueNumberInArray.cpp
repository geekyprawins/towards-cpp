#include <iostream>
using namespace std;

int unique(int arr[], int n)
{

    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;
}

int main()
{

    int arr[5] = {1, 1, 2, 2, 3};
    cout << unique(arr, 5);

    return 0;
}
// Let's dry run this for arr[] = {1, 2, 3, 4, 1, 2, 3}:
// what we can write:
// xorsum = 0 ^ 1;
// xorsum = 0 ^ 1 ^ 2;
// .
// .
// .
// xorsum = 0 ^ 1 ^ 2 ^ 3 ^ 4 ^ 1 ^ 2 ^ 3;
// By Commutative Property -
// xorsum = 0 ^ (1 ^ 1) ^ (2 ^ 2) ^ (3 ^ 3) ^ 4;
// xorsum = 0 ^ 0 ^ 0 ^ 0 ^ 4;
// xorsum = 4;