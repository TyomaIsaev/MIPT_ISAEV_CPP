void mergeArrays(int (&lhs)[N], int (&rhs)[N], int (&res)[2 * N]) {
    for (int i = 0; i < N; i++) {
        res[i] = lhs[i];
        res[i + N] = rhs[i];
    }
}