int missingMultiple(int* nums, int numsSize, int k) {
   
    int n = 0;

    while (true)
    {
        int flag = 0;
        n = n +  k;

        for (int i = 0; i < numsSize; i++) 
        {
            if (nums[i] == n) 
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            break;
        }
    }

    return n;
}