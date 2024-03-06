void printArray(int (&arr)[N]) {
    for (int i = 0; i < N; i++) {
        std::cout << arr[i];
        if (i < N -1) {
            std::cout << " ";
        
        }
    }
    std::cout << endl;
}