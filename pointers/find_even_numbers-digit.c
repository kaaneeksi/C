int findNumbers(int* nums, int numsSize) {

    int i;
    int even = 0;


    for (i = 0; i < numsSize; i++)
    {
        int count = 0;
        int    num = nums[i];

            while (num > 0)
            {
                num = num / 10;
                count++;
            }

    if (count % 2 == 0)
            even++;
    }
    return (even);
}
