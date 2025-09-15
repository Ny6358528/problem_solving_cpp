#include <iostream>
#include <string>
using namespace std;


int main() {

    int a, b, c;
    cin >> a >> b >> c;
    if(a>=b &&a>=c&&b>=c){
        cout<<c<<endl<<b<<endl<<a<<endl;
        cout<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
  
    }else if(a>=b &&a>=c&&c>=b){
     cout<<b<<endl<<c<<endl<<a<<endl;
       cout<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }else if(b>=a &&b>=c&&a>=c){
     cout<<c<<endl<<a<<endl<<b<<endl;
       cout<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }else if(b>=a &&b>=c&&c>=a){
     cout<<a<<endl<<c<<endl<<b<<endl;
       cout<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }else if(c>=a &&c>=b&&a>=b){
     cout<<b<<endl<<a<<endl<<c<<endl;
       cout<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }else if(c>=a &&c>=b&&b>=a){
     cout<<a<<endl<<b<<endl<<c<<endl;
       cout<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
  
    return 0;
}
