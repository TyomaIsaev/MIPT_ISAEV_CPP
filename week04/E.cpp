#include <iostream>

using namespace std;

bool reserve_memory(size_t N, int* &dst) {
    if (dst != nullptr)
        return false;

    dst = new int[N]; 
    return true;
}

void free_memory(int* &ptr) {
    delete[] ptr;
    ptr = nullptr; 
}

int main() {
    int N = 0; 
    int* ptr = nullptr;
    cin >> N;
    cout << reserve_memory(N, ptr) << endl;
    free_memory(ptr);
    return 0;
}