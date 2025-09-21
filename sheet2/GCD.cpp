#include <iostream>
#include <String>
using namespace std;
 
 
int main() {
 int n,k;
cin>>n>>k;
int gcd=0;
    for(int i=1;i<=n;i++){
        

       if(n%i==0&&k%i==0){
              gcd=i;
         }
            
    }
    cout<<gcd<<endl;
    return 0;
}