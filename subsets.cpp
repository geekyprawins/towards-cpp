#include <iostream>
using namespace std;

void subsets(char arr[], int n)
{
    // 2 power n = 1<<n here
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    subsets(arr, 5);

    return 0;
}