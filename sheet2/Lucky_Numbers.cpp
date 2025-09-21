#include <iostream>
#include <string>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long count = 0;
    
    for (long long i = a; i <= b; i++) {
        long long ii = i;
        bool isLucky = true;
        
        while (ii != 0) {
            long long digit = ii % 10;
            if (digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            ii /= 10; // دي كانت ناقصة
        }
        
        if (isLucky) {
            count++;
            cout << i << ' ';
        }
    }
    
    if (count == 0) {
        cout << -1 << endl;
    }
    
    return 0;
}
