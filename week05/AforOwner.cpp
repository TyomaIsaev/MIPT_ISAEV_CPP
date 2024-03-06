#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

#define N 10

void gnome_sort(int (&arr)[N]) {
    int id = 0;
    while (id < N) {
        if (id == 0 or arr[id] >= arr[id - 1]) {
            id++;
        } else {
            swap(arr[id], arr[id - 1]);
            id--;
        }
    }
}

int main() {
    int array_int[N];

    for (size_t i = 0; i < N; ++i) {
        cin >> array_int[i]; 
    }
    cout << endl;

    gnome_sort(array_int);

    cout << "Отсортированный массив:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << array_int[i] << " ";
    }
    cout << endl;

    return 0;
}
