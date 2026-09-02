long long sumAndMultiply(int n) {

    long long x = 0;
    int sum = 0, mul = 1;

    while (n > 0) 
    {
        int digit = n % 10;

        if (digit != 0) 
        {
            x = x + digit * mul;
            mul = mul * 10;
            sum = sum + digit;
        }

        n = n / 10;
    }

    return x * sum;
}