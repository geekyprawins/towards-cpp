#include <iostream>
using namespace std;
int clearBit(int n, int pos)
{

    return n & (~(1 << pos));
}
int main()
{
    cout << clearBit(5, 0) << endl;

    return 0;
}