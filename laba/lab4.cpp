#include <iostream> 
#include <chrono> 
 
using namespace std; 
 
bool sum_fast(int array[], int n, int target) {
    int left = 0;
    int right = n - 1;
    while (left < right) {
        int sum = array[left] + array[right];
        if (sum == target) {
            return true;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}
 
int main(){ 
    for(int n = 100; n < 1000001; n += 1000 ) { 
        double total_time = 0.0; // Переменная для суммирования времени поиска

        for (int run = 0; run < 10; ++run) { // 10 запусков для каждого значения n
            int* arr = new int[n]; 
            for (int i = 0; i < n; ++i) { 
                arr[i] = i; 
            } 
            auto begin = std::chrono::steady_clock::now(); 
            for (unsigned cnt = 100000; cnt != 0 ; --cnt) {
                sum_fast(arr, n, n+10000000 ); 
            }
            auto end = std::chrono::steady_clock::now(); 
            auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin); 
            total_time += time_span.count(); // Суммируем время выполнения для каждого запуска
            delete[] arr; // Освобождаем память для массива
        } 

        // Выводим среднее значение времени для 10 запусков
        cout << total_time / 10 << ',' ; 
    } 
    return 0; 
}
