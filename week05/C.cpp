#include <iostream>

using namespace std;

#define N 10

void heapify(int (&array)[N], int n, int i) {
    int max = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 

    if (left < n and array[left] > array[max])
        max = left;

    if (right < n and array[right] > array[max])
        max = right;

    if (max != i) {
        swap(array[i], array[max]);

        heapify(array, n, max);
    }
}

void cheops_sort(int (&array)[N]) {
    for (int i = 0; i <= N; i++)
        heapify(array, N, i);

    for (int i = N - 1; i > 0; i--) {
        swap(array[0], array[i]);

        heapify(array, i, 0);
    }
}

int main() {
    int array_int[N];

    for (size_t i = 0; i < N; ++i) {
        cin >> array_int[i]; 
    }

    cheops_sort(array_int); 

    cout << "Отсортированный массив: ";
    for (size_t i = 0; i < N; ++i) {
        cout << array_int[i] << " "; 
    }
    cout << endl;

    return 0;
}
