#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from, char to, char help)
{

    if (n == 0)
    {
        return;
    }

    towerOfHanoi(n - 1, from, help, to);
    cout << "Move from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, help, to, from);
}
int main()
{
    towerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}
