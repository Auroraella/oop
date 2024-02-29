double sum_even(double array[], int n) {
    // Return 0 if the size parameter is less than 1
    if (n < 1) {
        return 0;
    }

    double sum = 0;
    // Iterate through the array starting from index 0, and incrementing by 2 for even positions
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0){
            sum += array[i];
        }
        
    }

    return sum;
}
