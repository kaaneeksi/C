#include <stdio.h>

void counter() {
    static int count = 0; // Sadece bir kez başlatılır
    count++;
    printf("Count: %d\n", count);
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}
