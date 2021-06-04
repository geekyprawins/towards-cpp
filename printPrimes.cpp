#include <iostream>

using namespace std;
int main()
{
    int limit;
    int i, j;
    cin >> limit;
    for (i = 0; i <= limit; i++)
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

    return 0;
}
