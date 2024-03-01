double weighted_average(int array[], int n) {
    // Check if the size parameter is less than 1 or even
    if (n < 1) {
        return 0;
    }
    double result = 0;
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j< n; j++){
            if (array[i] == array[j]){
                count++; 
            }
        }
        result = result + (array[i]*count);
    }

    return result/n;
}