#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    long long num, ce = 0, co = 0, cp = 0, cn = 0;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0) {
            ce++;
        } else {
            co++;
        }
        if (num > 0) {
            cp++;
        } else if (num < 0) {
            cn++;
        }
    }

    cout << "Even: " << ce << endl;
    cout << "Odd: " << co << endl;
    cout << "Positive: " << cp << endl;
    cout << "Negative: " << cn << endl;

    return 0;
}
