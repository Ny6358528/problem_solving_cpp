#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 1; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 3; j++) { 
            cout << num << " ";
            num++;
        }
        cout << "PUM" << endl; 
        num++; 
    }

    return 0;
}
