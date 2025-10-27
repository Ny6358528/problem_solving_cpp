#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;   

    while (t--) {
        long long n, m;
        cin >> n >> m;

        long long mn = (n < m) ? n : m;
        long long mx = (n > m) ? n : m;
        long long sum = 0;

        for (long long i = mn + 1; i < mx; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
