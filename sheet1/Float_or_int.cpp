#include <iostream>
#include <string>
using namespace std;
 
 
int main() {
  
 
   
    double n;
    cin>>n;
       int intPart = (int)n;      
    double fracPart = n - intPart;
    if(int(n)==n){
        cout<<"int"<<" "<<n<<endl;
    }else{
        cout<<"float"<<" "<<intPart<<" "<<fracPart<<endl;
    }
 
   
   
    return 0;
}