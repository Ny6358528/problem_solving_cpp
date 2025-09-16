#include <iostream>
using namespace std;

int main() {
    int n;
  cin>>n;
   bool isPrime=false;
    for (int i = 2; i <n; i++) {
      
    
      if(n%i==0){
          
            isPrime=true;
            break;
      }
      
    }
    if(isPrime){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

   
    return 0;
}
