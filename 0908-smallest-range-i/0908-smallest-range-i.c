int smallestRangeI(int* nums, int numsSize, int k) {

    int min = nums[0];
    int max = nums[0];
    int ans = 0;

    for (int i = 1; i < numsSize; i++) 
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }

        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

        ans = max - min - 2 * k;

    if (ans < 0)
    {
        return 0;
    }
    return ans;
}