#include <iostream>

using namespace std;
int main()
{
    int limit1, limit2;
    int i, j;
    cin >> limit1 >> limit2;
    if ((limit1 >= 0 && limit2 > 0) && (limit1 < limit2))
    {
        for (i = limit1; i <= limit2; i++)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
            }
            if (j == i)
            {
                cout << i << "\n";
            }
        }
    }
    else
        cout << "Enter valid limits" << endl;

    return 0;
}
