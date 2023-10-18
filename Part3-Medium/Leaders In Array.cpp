// Problem link -   https://www.codingninjas.com/studio/problems/superior-elements_6783446
vector<int> superiorElements(vector<int> &a)
{
    // Write your code here.
    vector<int> ans;
    int maxElement = INT_MIN;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] > maxElement)
        {
            ans.push_back(a[i]);
        }
        maxElement = max(maxElement, a[i]);
    }
    return ans;
}