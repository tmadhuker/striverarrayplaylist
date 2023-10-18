// coding question - https://www.codingninjas.com/studio/problems/reading_6845742
// Without map and brute force approach

// TC- O(n^2) // SC O(1) -  we are using two for loops so TC is O(n^2);
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(book[i]+book[j]==target){
                return "YES";
            }
        }
    }
    return "NO";
}
