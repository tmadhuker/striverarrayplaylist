//Question Link -https://www.codingninjas.com/studio/problems/maximum-subarray-sum_630526
// Answers referred from article - https://takeuforward.org/data-structure/kadanes-algorithm-maximum-subarray-sum-in-an-array/
// Video for reference from same article mentioned above 

long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long currentsum=0;
    long maximumsum=0;
    for(int i=0;i<arr.size();i++){
        currentsum=currentsum+arr[i];
        if(currentsum>maximumsum){
            maximumsum=currentsum;
        }
        if(currentsum<0){
            currentsum=0;
        }
    }
    return maximumsum;
}