void printTransposed(int (&array)[N][M]) {
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}