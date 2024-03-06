void reverseArray(int (&arr)[N]) {
    int left = 0;
    int right = N - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}