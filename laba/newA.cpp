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

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(0, n - 1);
        int x = dist(gen);

        for (int run = 0; run < 10; ++run) {
            int* arr = new int[n];
            double mean = n / 2.0;
            double stddev = n / 6.0;

            std::random_device rd;
            std::mt19937 gen(rd());
            std::normal_distribution<> dist(mean, stddev);

            for (int i = 0; i < n; i++) {
                int value = static_cast<int>(round(dist(gen)));
                value = max(0, min(value, n - 1));
                arr[i] = value;
            }
            auto begin = std::chrono::steady_clock::now();
            for (unsigned cnt = 100000; cnt != 0 ; --cnt) {
                polniy(arr, n, x);
            }
            auto end = std::chrono::steady_clock::now();
            auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
            total_time += time_span.count();
            delete[] arr;
        }

        cout << total_time / 10 << ',';
    }
    return 0;
}
