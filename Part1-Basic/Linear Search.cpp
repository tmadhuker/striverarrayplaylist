// Problem link - https://www.codingninjas.com/studio/problems/linear-search_6922070
int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    for (int i = 0; i < n; i += 1)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
