#include <stdio.h>
#include <stdlib.h>

int main() {

    int *arr;
    int n;
    int sum;

    sum = 0;
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
    printf("%d",sum);
    free(arr);
    return 0;
}
