#include <iostream>
using namespace std;

int main()
{ // to print a hollow rectangle of stars
    int row, col;
    cout << "Enter the number of rows and columns : " << endl;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if ((i == 0 || i == row - 1) || (j == 0 || j == col - 1))
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
