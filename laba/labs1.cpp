#include <iostream> 
#include <chrono> 
#include <random> 
 
using namespace std; 
 
int polniy(int array[], int n, int x) { 
    for(int i = 0; i < n; ++i) { 
        if(x == array[i]){ 
            return i; 
        } 
    } 
    return -1; 
} 
 
int main(){ 
    for(int n = 100; n < 1000001; n += 10000 ){ 
       int* arr = new int[n]; 
        for (int i = 0; i < n; i++){ 
            arr[i] = rand() % n; 
        } 
        auto begin = std :: chrono :: steady_clock :: now(); 
        for (unsigned cnt = 100000; cnt != 0 ; --cnt) 
            polniy(arr, n, n+1 ); 
        auto end = std :: chrono :: steady_clock :: now(); 
        auto time_span = 
        std :: chrono :: duration_cast < std :: chrono :: milliseconds >(end - begin); 
        std :: cout << time_span.count() << ',' ; 
    } 
    return 0; 
}
//для вывода значений n будем использовать аналогичный цикл, только с cout << n << ',';
