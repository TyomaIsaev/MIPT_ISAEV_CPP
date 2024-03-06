#include <iostream>

using namespace std;

#define N 10 

void qsort(int (&array)[N], int ind_left_base, int ind_right_base) {
    if (ind_left_base >= ind_right_base)
        return;

    int left = ind_left_base;
    int right = ind_right_base;
    int medium = array[(left + right) / 2]; 

    while (left <= right) {
        while (array[left] < medium)
            left++; 
        while (array[right] > medium)
            right--;

        if (left <= right) {
            swap(array[left], array[right]);
            left++;
            right--;
        }
    }

    qsort(array, ind_left_base, right);
    qsort(array, left, ind_right_base);
}

int main() {
    int array_int[N];

    for (size_t i = 0; i < N; ++i) {
        cin >> array_int[i]; 
    }

    qsort(array_int, 0, N - 1); 

    cout << "Отсортированный массив: ";
    for (size_t i = 0; i < N; ++i) {
        cout << array_int[i] << " "; 
    }
    cout << endl;

    return 0;
}

