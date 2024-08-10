#include <stdio.h>
#include <stdlib.h>
void arr_swap(int *arr1, int *arr2)
{
    int temp;

    temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}
int main()
{
    int num, *arr, i;

    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int swap;

    swap = num / 2;
    for(i = 0; swap > 0; i++)
    {
        arr_swap(&arr[i], &arr[num - i - 1]);
        swap--;
    }


    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
	free(arr);
}
