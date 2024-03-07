#include <iostream> 
#include <chrono> 

using namespace std; 

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Возвращаем индекс, если нашли
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Если не нашли, возвращаем -1
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
                binarySearch(arr, n, n+100 ); 
            }
            auto end = std::chrono::steady_clock::now(); 
            auto time_span = std::chrono::duration_cast<std::chrono::microseconds>(end - begin); 
            total_time += time_span.count(); // Суммируем время выполнения для каждого запуска
            delete[] arr; // Освобождаем память для массива
        } 

        // Выводим среднее значение времени для 10 запусков
        std::cout << total_time / 10 << ',' ; 
    } 
    return 0; 
}
