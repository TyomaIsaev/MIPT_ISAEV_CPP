int trace(int (&array)[N * N]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += array[i * N + i];
    }
    return sum;
}