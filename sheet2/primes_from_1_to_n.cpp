#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    for (int i = 2; i <= N; i++) {  
        bool t = true;             

        for (int j = 2; j < i; j++) {   
            if (i % j == 0) {
                t = false;         
                break;
            }
        }

        if (t) {
            cout << i << " ";       
        }
    }

    return 0;
}
