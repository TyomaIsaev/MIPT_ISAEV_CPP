#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    if (n == 0){
        cout << '1' << endl;
    } else if (n == 1){
        cout << '1' << endl;
    } else {
        m = n;
        while (n > 1){
            n = n-1;
            m *= n;
        }
        cout << m << endl;
    }
    return 0;
}