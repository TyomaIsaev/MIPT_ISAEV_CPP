#include <iostream>

using namespace std;

int Log2(int x) {
    int res = -1;
    while (x > 0) {
        x >>= 1;
        res++;
    }
    return res;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int ai;
        cin >> ai;

        int p = Log2(ai);

        cout << p << endl;
    }

    return 0;
}