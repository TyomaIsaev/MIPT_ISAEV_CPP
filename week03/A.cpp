#include <iostream>

#define N 10

using namespace std;

void readArray(int (&arr)[N]) {
    for (int i = 0; i < N; i++) {
    std::cin >> arr[i];
}
}

int main() {
    int res = readArray(int (&arr)[N])
    cout << 
}

void printArray(int (&arr)[N]) {
    for (int i = 0; i < N; i++) {
        std::cout << arr[i];
        if (i < N -1) {
            std::cout << " ";
        
        }
    }
    std::cout << endl;
}

void reverseArray(int (&arr)[N]) {
    for (int i = 0; i < N; i++) {
    std::cin >> arr[i];
    }
}

void reverseArray(int (&arr)[N]) {
    for (int i = 0; i <= N ; i++) {
        if (i <= N - 1) {
            for (int j = 0; j < N - 1; j++) {
                int b = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = b; 
            }
        } else {
            if (i == N)
            arr[i] = arr[0];
        }
    }   
} 

int main(){
 int arr[N] = {1, 2, 3 , 4, 5, 6, 7, 8, 9, 10} 

}

void reverseArray(int (&arr)[N]) {
    int left = 0;
    int right = N - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void shiftArrayRight(int (&arr)[N]) {
    int left = 0;
    int right = N - 1;
    arr[left] = arr[right];
    while (left <= right) {
        swap(arr[left], arr[left + 1]);
        left++;
    }
}

void shiftArrayRight(int(&arr)[N]) {
    int last = arr[N-1];
    for(int i = N-1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

void moveNegativeToEnd(int (&array)[N]) {
    int res = N - 1;
    for(int i = res; i > 0; i--) {
        if (array[i] < 0); {
            swap(array[i],  array[res]);
        }
    res--;
    }
}

void moveNegativeToEnd(int (&array)[N]) {
    int left = 0;
    int right = N - 1;
    
    while (left < right) {
        while (array[left] >= 0 and left < right) {
            left++;
        }
        while (array[right] < 0 and left < right) {
            right--;
        }
        if (left < right) {
            int tmp = array[left];
            array[left] = array[right];
            array[right] = tmp;
        }
    }
}
