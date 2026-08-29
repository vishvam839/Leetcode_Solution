bool isGoodArray(int* nums, int numsSize) {

    int gcd = nums[0];
    int a=0;
    int b=0;
    int c;

    if(numsSize == 1)
    {
        if(nums[0] == 1)
        {
            return true;
        }
    }

    else
    {
        for (int i = 1; i < numsSize; i++) 
        {
            a = gcd;
            b = nums[i];

            while (b != 0) 
            {
                c = a % b;
                a = b;
                b = c;
            }

            gcd = a;

            if (gcd == 1)
            {
                return true;
            }
        }
    }

    return false;
}