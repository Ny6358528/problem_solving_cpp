#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long x, mx = -1;  

    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x > mx) {
            mx = x;
        }
    }

    cout << mx << endl;
    return 0;
}
