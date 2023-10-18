// Question Link - https://www.codingninjas.com/studio/problems/find-the-single-element_6680465
// TC- O(N) ,SC O(1) - constant
//There are other approaches mentioned in the Video/ Link Please visit - https://takeuforward.org/arrays/find-the-number-that-appears-once-and-the-other-numbers-twice/

#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int ans;
	for(int i=0;i<arr.size();i++){
		 cout<<i<<arr[i]<<endl;
		 
		if(arr[i]==arr[i+1]){
			i++;
		}
		else{
			cout<<"im here"<<endl;
			ans=arr[i];
			break;
		}
		
	}	
	return ans;
}