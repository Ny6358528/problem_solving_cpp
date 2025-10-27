#include <iostream>
using namespace std;

int main() {
    int n, m;
    
    while (true) {
        cin >> n >> m;

      
        if (n <= 0 || m <= 0)
            break;

        int min = (n < m) ? n : m;
        int max = (n > m) ? n : m;
        int sum = 0;

        for (int i = min; i <= max; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }

    return 0;
}
