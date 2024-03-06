int find_unique(int (&a)[N]) {
    int unique = 0;
    for (int i = 0; i < N; i++) {
        unique ^= a[i];
    }
    return unique;
}