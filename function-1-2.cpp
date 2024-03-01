double array_mean(int array[], int n) {
    if (n < 1) {
    return 0.0;
  }
    double sum = 0;
    double mean;
    for (int i = 0; i < n; i++) {
        sum = sum + array[i];
    }
    mean = sum / static_cast<double>(n);
    return mean;

}