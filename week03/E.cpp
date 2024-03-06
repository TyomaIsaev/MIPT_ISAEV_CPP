void moveNegativeToEnd(int (&array)[N]) {
    int sum = 0;
    
	for (int i = N - 1; i > -1; --i) {
        if (array[i] < 0) {
            sum += 1;
            if (i == N - 1) {
                continue;
            } else {
                for (int j = i ; j < N - sum; ++j) {
                        int temp = array[j];
                        array[j] = array[j+1];
                        array[j+1] = temp;
                }
            }
        }
    }
}