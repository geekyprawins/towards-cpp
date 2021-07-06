#include <iostream>
using namespace std;


int setbit(int n , int pos){

    return n | (1<<pos) ; 
}
int main()
{
    cout<<setbit(5,  2)<<endl ; 

    return 0;
}