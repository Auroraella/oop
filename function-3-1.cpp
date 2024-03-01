bool is_fanarray(int array[], int n) {
    // Check if the size parameter is less than 1
    if (n < 1) {
        return false;
    }
    int middle_index;

    if (n % 2 == 0){
        middle_index = int(n/2) - 1;
    }else{
        middle_index = int(n/2);
    }

    // Check if the array is a palindrome with numbers in ascending order
    for (int i = 1; i <= middle_index; i++) {
        if (array[i] < array[i-1] || array[i-1] != array[n-i]) {   
            return false;
        }
    }

    return true;
}