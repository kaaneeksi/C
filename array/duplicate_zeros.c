void duplicateZeros(int* arr, int arrSize) {

    int i, j;
    int zeros;

    zeros = 0;
    for (i = 0; i < arrSize; i++) {
        if (arr[i] == 0) {
            zeros++;
        }
    }

    for (i = arrSize - 1, j = arrSize + zeros - 1; i >= 0; i--, j--) {
        if (j < arrSize) {
            arr[j] = arr[i];
        }
        if (arr[i] == 0) {
            j--;
            if (j < arrSize) {
                arr[j] = 0;
            }
        }
    }
}

