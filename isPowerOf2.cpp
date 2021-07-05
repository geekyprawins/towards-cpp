#include <iostream>
using namespace std;
bool ispoweroftwo(int n)
{

    return !(n & n - 1);
}
int main()
{
    cout << ispoweroftwo(8) << endl;

    return 0;
}
