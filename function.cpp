int count_evens(int number) {
    int num = 0;
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            num++;
        }
    }
    return num;
}