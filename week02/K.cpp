#include <iostream>

using namespace std;

int main(){
    long long int N, a, M, K;
    
    cin >> N >> M >> K;
    a = N;
    if (K == 0){
        cout << 1;
    } else {
        for(long long int i = 2; i <= M; i += 1){
            N *= a;
            N %= K;
        }
        cout << N;
    }
    return 0;
}