double* copyArrayToDynamic(double arr[], int size) {
    // Tạo mảng động
   double* newArr = new double [size];

    // Sao chép giá trị từ mảng đã cho vào mảng động
    for (int i = 0; i < size; ++i) {
        newArr [i] = arr[i];
    }

    // Trả về con trỏ đến mảng động
    return newArr ;
}