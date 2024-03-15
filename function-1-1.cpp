double arrayMin(double* array, int size) {
    double minValue = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] < minValue) {
            minValue = array[i];
        }
    }

    return minValue;

}