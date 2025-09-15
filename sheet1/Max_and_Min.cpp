#include <iostream>
#include <string>
using namespace std;


int main() {
  
    
    long long a, b, c,min,max;
  
cin >> a >> b>>c;
   if(a>=b &&a>=c&&b>=c){
    max=a;
    min=c;
    cout<<min<<" "<<max;
   }else if(a>=b &&a>=c&&c>=b){
    max=a;
    min=b;
   cout<<min<<" "<<max;

  
   }
    else if(b>=a &&b>=c&&a>=c){
    max=b;
    min=c;
   cout<<min<<" "<<max;
   }
    else if(b>=a &&b>=c&&c>=a){
    max=b;
    min=a;
   cout<<min<<" "<<max;
   }
    else if(c>=a &&c>=b&&a>=b){
    max=c;
    min=b;
     cout<<min<<" "<<max;
   }
    else if(c>=a &&c>=b&&b>=a){
    max=c;
    min=a;
   cout<<min<<" "<<max;
   }

  
  
    return 0;
}
