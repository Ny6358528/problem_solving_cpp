#include <iostream>
using namespace std;
 
int main() {
    int n;
 
    cin >> n; 
 
 long long s=n-1,p=1;
    for (int i = 1; i <= n; i++) {  
      
      for(int j=1;j<=s;j++){
          cout<<" ";
      }
      s--;
      for(int j=1;j<=p;j++){
          cout<<"*";
      }
      p+=2;
      cout<<endl;
    }
 
    return 0;
}