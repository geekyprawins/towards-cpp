#include <iostream>
using namespace std;

int main()
{
    // to print a butterfly patter
    int n;
    cout << "Enter a value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        int spaceCount = 2 * n - 2 * i;
        for (int i = 0; i < spaceCount; i++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int spaceCount = 2 * n - 2 * i;
        for (int i = 0; i < spaceCount; i++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
