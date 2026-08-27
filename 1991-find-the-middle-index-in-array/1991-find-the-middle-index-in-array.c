int findMiddleIndex(int* nums, int numsSize)
{
    int sum = 0;
    int left = 0;

    for (int i = 0; i < numsSize; i++)
    {
        sum = sum +  nums[i];
    }

    for (int i = 0; i < numsSize; i++)
    {
        int right = sum - left - nums[i];

        if (left == right)
        {
            return i;
        }

        left = left + nums[i];
    }

    return -1;
}