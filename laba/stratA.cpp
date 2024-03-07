#include <iostream>
#include <chrono>
#include <random>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int polniy(int array[], int n, int x) { 
    for(int i = 0; i < n; ++i) {
        if(x == array[i]) {
            if (i != 0) { 
                swap(array[0], array[i]);
            }
            return i;
        }
    }
    return -1;
}

int main(){
    for(int n = 100; n < 1000001; n += 10000 ) {
        double total_time = 0.0;

        for (int run = 0; run < 10; ++run) { 
            int* arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = i;
            }
            srand(12345);
            std::random_shuffle(arr, arr + n);

            auto begin = std::chrono::steady_clock::now();
            for (unsigned cnt = 100000; cnt != 0 ; --cnt) {
                polniy(arr, n, n+1 );
            }
            auto end = std::chrono::steady_clock::now();
            auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
            total_time += time_span.count(); // Суммируем время выполнения для каждого запуска
            delete[] arr; 
        }

        cout << total_time / 10 << ',';
    }
    return 0;
}