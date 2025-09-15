
#include <iostream>
#include <String>
using namespace std;
 
 
int main() {
 
   
    int a,b,c;
    cin>>a;
    b=a%10;
    b=a/10;
     c=b%100;
    c=b/100;
    



 
    if(c%2==0){
        
        cout<<"EVEN"<<endl;}
    else{
        cout<<"ODD"<<endl;}
    
    
   
    return 0;
}