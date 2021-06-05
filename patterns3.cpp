#include <iostream>
using namespace std;

int main()
{
    // to print an inverted half pyramid

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j > 0; j--)
        {
            cout << " *";
        }
        cout << endl;
    }
    // OR we can use 

    // for (int i = n; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }

    return 0;
}