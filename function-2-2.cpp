int max_element(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    
    int maxValue = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i] > maxValue) {
            maxValue = array[i];
        }
    }
    return maxValue;
}