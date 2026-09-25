int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    
    int* ans = malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++) 
    {
        ans[i] = nums[i] * nums[i];
    }

    for (int i = 0; i < numsSize - 1; i++) 
    {
        for (int j = 0; j < numsSize - i - 1; j++) 
        {
            if (ans[j] > ans[j + 1]) 
            {
                int temp = ans[j];
                ans[j] = ans[j + 1];
                ans[j + 1] = temp;
            }
        }
    }

    *returnSize = numsSize;
    
    return ans;
}