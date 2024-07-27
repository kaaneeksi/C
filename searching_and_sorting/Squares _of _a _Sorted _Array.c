#include <stdlib.h>

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    int	*p;
    int	i;
    int	j;
    int	swapped;

    p = (int *)malloc(numsSize * sizeof(int));

    if (p == NULL)
        return (NULL);

    for(i = 0; i < numsSize; i++)
    {
        p[i] = nums[i] *nums[i];
    }

    for(i = 0; i < numsSize - 1; i++)
    {
       swapped = 0;
        for (j = 0; j < numsSize - i - 1; j++)
        {
            if(p[j] > p[j + 1])
            {
                swap(&p[j], &p[j + 1]);
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }

    *returnSize = numsSize;
    return (p);
    free(p);
}
