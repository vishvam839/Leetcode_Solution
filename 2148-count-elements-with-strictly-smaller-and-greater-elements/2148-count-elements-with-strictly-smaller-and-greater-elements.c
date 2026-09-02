int countElements(int* nums, int numsSize) {

    int min = nums[0];
    int max = nums[0];
    int count = 0;

    for (int i = 0; i < numsSize; i++) 
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

    for (int i = 0; i < numsSize; i++) 
    {
        if (nums[i] > min && nums[i] < max)
        {
            count++;
        }
    }

    return count;
}