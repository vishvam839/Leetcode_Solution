int findKthPositive(int* arr, int arrSize, int k) {
    
    int num = 1;

    while (k > 0) 
    {
        int found = 0;

        for (int i = 0; i < arrSize; i++) 
        {
            if (arr[i] == num) 
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            k--;
        }

        num++;
    }

    return num - 1;
}