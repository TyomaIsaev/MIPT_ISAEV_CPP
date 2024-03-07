#include <iostream> 
#include <chrono> 
 
using namespace std; 
 
bool polniy(int array[], int n, int target) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (array[i] + array[j] == target) {
                return true;
            }
        }
    }
    return false;
}
 
int main() { 
    for (int n = 100; n < 1000; n += 10) {
        double total_time = 0.0;

        for (int run = 0; run < 10; ++run) {
            int* arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = rand() % n;
            }

            int never = n + 1000;
            auto begin = chrono::steady_clock::now();
            for (unsigned cnt = 100000; cnt != 0; --cnt)
                polniy(arr, n, never);
            auto end = chrono::steady_clock::now();
            auto time_span = chrono::duration_cast<chrono::milliseconds>(end - begin);
            total_time += time_span.count(); // Суммируем время выполнения для каждого запуска
            delete[] arr; // Освобождаем память для массива
        }

        // Выводим среднее значение времени для 10 запусков
        cout << total_time / 10 << ',';
    }

    return 0;
}