int largestInteger(int* nums, int numsSize, int k) {
    
    int ans = -1;
    int count = 0;
    int found = 0;

    for (int x = 0; x <= 100; x++) 
    {
        count = 0;

        for (int i = 0; i <= numsSize - k; i++) 
        {
            found = 0;

            for (int j = i; j < i + k; j++) 
            {
                if (nums[j] == x) 
                {
                    found = 1;
                    break;
                }
            }

            if (found)
            {
                count++;
            }
        }

        if (count == 1)
        {
            ans = x;
        }
    }

    return ans;
}