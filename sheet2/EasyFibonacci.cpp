#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    long long n;
    cin >> n;
    long long f1 = 0, f2 = 1;

    for (long long i = 0; i < n; i++) {

        if (i == 0) {                   
            cout << f1 << " ";
        } else if (i == 1) {           
            cout << f2 << " ";
        } else {                         
            long long f3 = f1 + f2;
            cout << f3 << " ";
            f1 = f2;
            f2 = f3;
        }
    }

    return 0;
}
