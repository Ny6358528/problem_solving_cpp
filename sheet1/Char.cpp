
#include <iostream>
#include <String>
using namespace std;
 
 
int main() {
 
   
   char a;
    cin>>a;
     if(a>=65 && a<=90){
       cout<<char(a+32)<<endl;}
    else if (a>=97 && a<=122){
     cout<<char(a-32)<<endl;}
    
   
    return 0;
}