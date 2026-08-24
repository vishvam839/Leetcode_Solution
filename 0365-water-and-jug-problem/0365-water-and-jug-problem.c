int canMeasureWater(int x, int y, int target)
{
    int temp;

    if (target > x + y)
    {
        return false;
    }

    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    if (target % x == 0)
    {
        return true;
    }

    return false;
}