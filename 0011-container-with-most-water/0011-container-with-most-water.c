int maxArea(int* height, int heightSize) {

    int start = 0, max = 0;
    int end = heightSize - 1;
    int h;
    int width, area = 0;

    while (start < end)
    {
        if (height[start] < height[end])
        {
            h = height[start];
        }
        else
        {
            h = height[end];
        }

        width = end - start;

        area = h * width;

        if (area > max)
        {
            max = area;
        }

        if (height[start] < height[end])
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    return max;
}