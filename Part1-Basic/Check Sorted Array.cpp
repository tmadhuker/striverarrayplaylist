int isSorted(int n, vector<int> a)
{
    // Write your code here
    for (int i = 0; i < n - 1; i += 1)
    {
        if (a[i] > a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
