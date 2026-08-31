int majorityElement(int* nums, int numsSize) {

    int count = 0,ans = 0;

    for (int i = 0; i < numsSize; i++) 
    {
        if (count == 0)
        {
            ans = nums[i];
        }

        if (nums[i] == ans)
        {
            count++;
        }

        else
        {
            count--;
        }
    }

    return ans;
}