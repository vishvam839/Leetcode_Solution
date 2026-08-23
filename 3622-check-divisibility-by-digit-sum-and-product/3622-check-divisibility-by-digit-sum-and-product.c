bool checkDivisibility(int n) {
    int num = n;
    int sum = 0;
    int mul = 1;
    int digit;

    while (num > 0) {
        digit = num % 10;

        sum = sum + digit;
        mul = mul * digit;

        num = num / 10;
    }

    if (n % (sum + mul) == 0) 
    {
        return true;
    }

    return false;
}