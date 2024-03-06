#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

void gnome_sort(int arr[], int size) {
    int id = 0;
    while (id < size) {
        if (id == 0 or arr[id] >= arr[id - 1]) {
            id++;
        } else {
            swap(arr[id], arr[id - 1]);
            id--;
        }
    }
}

int main() {
    srand(time(0));
    int s;
    cin >> s;
    int array[s];

    cout << "Исходный массив:" << endl;
    for (int i = 0; i < s; ++i) {
        array[i] = rand() % s + 1;
        cout << array[i] << " ";
    }
    cout << endl;

    gnome_sort(array, s);

    cout << "Отсортированный массив:" << endl;
    for (int i = 0; i < s; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
