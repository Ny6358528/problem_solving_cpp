#include <iostream>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    
    long long sum = 0;
    
    for (long long i = 1; i <= n; i++) {
        long long ii = i, digitSum = 0;
        
      
        while (ii != 0) {
            long long lastDigit = ii % 10;
            digitSum += lastDigit;
            ii /= 10;
        }

    
        if (digitSum >= a && digitSum <= b) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
