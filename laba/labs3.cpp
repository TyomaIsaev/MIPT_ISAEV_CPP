#include <iostream> 
#include <chrono> 
 
using namespace std; 
 
pair<int, int> find2(int arr[], int n, int x){ 
    for(int i = 0; i < n; ++i){ 
        for(int j = i + 1; j < n; ++j){ 
            if(x == arr[i] + arr[j]){ 
                return make_pair(i, j); 
            } 
        } 
    } 
    return make_pair(-1, -1); 
} 
 
int main(){ 
    for(int n = 100; n < 1000; n += 10 ){ 
        //cout << n << ','; 
       int* arr = new int[n]; 
        for (int i = 0; i < n; i++){ 
            arr[i] = rand() % n; 
        } 
        int b = n + 1000; 
        auto begin = std :: chrono :: steady_clock :: now(); 
        for (unsigned cnt = 100000; cnt != 0 ; --cnt) 
            find2(arr, n, b ); 
        auto end = std :: chrono :: steady_clock :: now(); 
        auto time_span = 
        std :: chrono :: duration_cast < std :: chrono :: milliseconds >(end - begin); 
        std :: cout << time_span.count() << ',' ; 
    } 
    return 0; 
}
