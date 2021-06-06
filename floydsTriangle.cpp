#include <iostream>
using namespace std;

int main()
{
    // to print a Floyd's triangle
    int n;
    cout << "Enter a value of n : ";
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}
