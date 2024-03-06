#include <iostream>

using namespace std;

int main() {
    int* array = nullptr;
    int size = 0; 
    int num;

    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        
        int* tmpArray = new int[size + 1];
        for (int i = 0; i < size; ++i) {
            tmpArray[i] = array[i];
        }
        delete[] array;
        array = tmpArray;
        
        array[size++] = num;
    }

    for (int i = 1; i < size; ++i) {
        std::cout << array[i - 1] - array[i] << " ";
    }

    delete[] array;

    return 0;
}
