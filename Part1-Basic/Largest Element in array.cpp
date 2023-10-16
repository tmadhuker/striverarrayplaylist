#include <bits/stdc++.h> 
#include<limits.h>
using namespace std;
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int maxval=INT_MIN;
    for(int i=0;i<arr.size();i+=1){
        if(arr[i]>maxval){
            maxval=arr[i];
        }
    }
    return maxval;
}
