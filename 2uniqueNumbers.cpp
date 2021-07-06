#include <iostream>
using namespace std;

int setbit(int n, int pos)
{

    return (n & (1 << pos)) != 0;
}

void unique2(int arr[], int n)
{

    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    int setBit = 0;
    int pos = 0;
    int tempXor = xorSum;
    while (setBit != 1)
    {
        setBit = xorSum & 1;
        pos++;
        xorSum = xorSum >> 1;
    }
    int newXor = 0;

    for (int i = 0; i < n; i++)
    {
        if (setbit(arr[i], pos - 1))
        {
            newXor = newXor ^ arr[i];
        }
    }
    cout << newXor << endl;
    cout << (tempXor ^ newXor) << endl;
}

int main()
{

    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5};
    unique2(arr, 8);

    return 0;
}