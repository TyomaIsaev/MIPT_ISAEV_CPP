#include <iostream>

using namespace std;

long long int recursive(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * recursive(n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    long long int result = recursive(n);

    cout << result << endl;

    return 0;
}