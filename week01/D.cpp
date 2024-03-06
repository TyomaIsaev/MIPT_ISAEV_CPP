#include <iostream>

using namespace std;

int main() {
    int a, b;
    int res = 0;
    cin >> a >> b;
    
    while (b != 0)
    {
        res = a % b;
        a = b;
        b = res;
    }

    cout << a << endl;
    return 0;
}