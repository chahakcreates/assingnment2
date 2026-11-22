int beautifulDays(int i, int j, int k)
{
    int count = 0;
    for (int day = i; day <= j; day++)
    {
        int num = day, reversed = 0;
        while (num > 0)
        {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        int difference = day - reversed;
        if (difference < 0) difference = -difference;
        if (difference % k == 0) count++;
    }
    return count;
}
