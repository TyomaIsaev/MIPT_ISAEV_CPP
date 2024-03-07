#include <iostream> 
#include <chrono> 
#include <random> 

using namespace std; 

int polniy(int array[], int n, int x) { //сама функция
    for(int i = 0; i < n; ++i) { 
        if(x == array[i]) { 
            return i; 
        } 
    } 
    return -1; 
} 

int main(){ 
    for(int n = 100; n < 1000001; n += 10000 ) { 
        double total_time = 0.0; 

        for (int run = 0; run < 10; ++run) { // 10 запусков для каждого значения n
            int* arr = new int[n]; 
            for (int i = 0; i < n; i++) { 
                arr[i] = rand() % n; 
            } 

            auto begin = std::chrono::steady_clock::now(); 
            for (unsigned cnt = 100000; cnt != 0 ; --cnt) {
                polniy(arr, n, n+1 ); 
            }
            auto end = std::chrono::steady_clock::now(); 
            auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin); 
            total_time += time_span.count(); // Суммируем время выполнения для каждого запуска
            delete[] arr; 
        } 

        cout << total_time / 10 << ',' ; 
    } 
    return 0; 
}