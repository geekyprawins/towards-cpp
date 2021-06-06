#include <iostream>
using namespace std;

int main()
{
    // to print a pattern of 0,1 half pyramid

    int n;
    cout << "Enter any value for n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if ((i+j)%2 == 0)
            {
                cout << 1 << " ";
            }
            else
                cout << 0 << " ";
        }

        cout << endl;
    }

    return 0;
}
