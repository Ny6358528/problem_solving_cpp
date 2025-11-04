#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long count = 0;
        while (n != 0) {
            if (n % 2 != 0) {
                count++;
            }
            n /= 2;
        }
        long long ans = 0;
        for (long long i = 0; i < count; i++) {
            ans += pow(2, i);
        }
        cout << ans << endl;
    }
    return 0;
}
