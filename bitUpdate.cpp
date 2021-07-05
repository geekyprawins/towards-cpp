#include <iostream>
using namespace std;

int
updateBit (int n, int pos, int bit) 
{
  
    // clear
  int clearedBit = n & (~(1 << pos));
  
    //set
  int final = (clearedBit | bit << pos);
  
 
return final;

}


int
main () 
{
  
cout << updateBit (5, 1, 1) << endl;
  
 
return 0;

}
