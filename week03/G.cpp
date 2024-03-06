int findLastZero(int (&array)[N]) {
    int left = 0;
    int right = N - 1;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == 0) {
            index = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return index;
}