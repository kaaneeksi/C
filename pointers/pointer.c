#include <stdio.h>

// Fonksiyon tanımlaması: İki değeri değiştiren fonksiyon (değer döndürerek)
int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    return a, b; // Yer değiştirilmiş a ve b değerlerini döndür
}

int main() {
    int x = 5, y = 10;

    printf("Öncesinde: x = %d, y = %d\n", x, y);

    // swap fonksiyonunu çağırarak x ve y değerlerini değiştirme
    x = swap(x, y);

    printf("Sonrasında: x = %d, y = %d\n", x, y);

    return 0;
}
