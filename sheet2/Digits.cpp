#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    
    while(t--) {
        long long n;
        cin >> n;

        if(n == 0) {
            cout << 0 << endl;
        } else {
            while(n != 0) {
                long long digit = n % 10;  
                cout << digit << " ";      
                n /= 10;                
            }
            cout << endl;
        }
    }
    return 0;
}
