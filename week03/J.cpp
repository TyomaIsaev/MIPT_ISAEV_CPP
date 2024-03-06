void sort2d(int (&array)[N][M]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            for (int k = 0; k < N; ++k) {
                for (int l = 0; l < M; ++l) {
                    if (array[i][j] < array[k][l]) {
                        int temp = array[i][j];
                        array[i][j] = array[k][l];
                        array[k][l] = temp;
                    }
                }
            }
        }
    }
}