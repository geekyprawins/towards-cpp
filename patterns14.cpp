#include <iostream>
using namespace std;

int main()
{
    // to print a zig-zag star pattern

    int n;
    cout << "Enter any value for n : "; // for n=9 only
    cin >> n;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0 && (i == 0 || i == 1 || i == 2))
            {
                cout << " *";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
