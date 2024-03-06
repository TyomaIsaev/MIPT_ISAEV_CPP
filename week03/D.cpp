void shiftArrayRight(int(&arr)[N]) {
    int last = arr[N-1];
    for(int i = N-1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
