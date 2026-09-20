int reverseDegree(char* s) {
    
    int ans = 0;
    int value;

    for (int i = 0; s[i] != '\0'; i++) 
    {
        value = 26 - (s[i] - 'a');
        ans = ans + value * (i + 1);
    }

    return ans;
}