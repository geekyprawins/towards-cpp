#include <iostream>
using namespace std;


int setBit(int n , int pos){

    return n | (1<<pos) ; 
}
int main()
{
    cout<<setBit(5,  2)<<endl ; 

    return 0;
}