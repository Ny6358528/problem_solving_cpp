#include <iostream>
#include <string>
using namespace std;
 
 
int main() {
  
 
   
 int a,b;
char op;
    cin>>a>>op>>b;
    if(op=='>'&&a>b||op=='='&&a==b||op=='<'&&a<b){
        cout<<"Right"<<endl;
    }else { 
        cout<<"Wrong"<<endl;
    }
    return 0;
}