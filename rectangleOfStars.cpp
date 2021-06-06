#include <iostream>

using namespace std;
int main()
{
// to print a filled rectangle of stars 
    int row, col;
    cout << "Enter the number of rows and columns : " << endl;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}
