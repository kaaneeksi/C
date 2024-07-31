#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;   
}

int main() {
    int x = 5, y = 10;

    printf("Öncesinde: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Sonrasında: x = %d, y = %d\n", x, y);

    return 0;
}
