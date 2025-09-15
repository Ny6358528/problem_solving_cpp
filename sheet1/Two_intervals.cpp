#include <iostream>
#include <cmath>
using namespace std;
 
 
int main() {
  
 
   
  long long l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    long long maxl=max(l1,l2);
    long long minr=min(r1,r2);
    if(maxl<=minr){
        cout<<maxl<<" "<<minr<<endl;
    }
 
   
    else{
        cout<<"-1"<<endl;
    }
 
        
   
    return 0;
}