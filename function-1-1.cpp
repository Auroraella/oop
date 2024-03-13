int min_element(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    int minValue = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i] < minValue) {
            minValue = array[i];
        }
    }
    return minValue;
}