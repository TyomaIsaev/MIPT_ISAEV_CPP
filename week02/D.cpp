#include <iostream>

using namespace std;

long long int recursive(int N, int M) {
    if (M == 0) {
        return 1;
    }
    else {
        return N * recursive(N, M - 1);
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    long long int result = recursive(N, M);

    cout << result << endl;

    return 0;
}