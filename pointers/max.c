int findMaxConsecutiveOnes(int* nums, int numsSize) {

    int i;
    int one;
    int temp;

    temp = 0;
    one = 0;
    i = 0;
    while (i < numsSize)
    {
       if (nums[i] == 1)
       {
           one++;
           if (temp < one)
            temp = one;
       }
        else
            one = 0;
        i++;
    }
    return (temp);
}
