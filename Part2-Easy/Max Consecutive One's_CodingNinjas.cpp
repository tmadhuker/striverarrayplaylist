// Coding question link - https://codingninjas.com/studio/problems/traffic_6682625
// Code solution taken from Bard 
// TC- O(N) since we are doing only one interation and trying to convert the 0's to 1's in the array to increase more 1's in array


int traffic(int n, int M, vector<int> arr) {
	// Write your code here.
		int count = 0;
  int max_count = 0;
  int flip_count = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
      count++;
    } else if (arr[i] == 0 && flip_count < M) {
      count++;
      flip_count++;
    } else {
      count = 0;
    }

    max_count = max(max_count, count);
	// cout<<max_count<<endl;
  }
  return max_count;
}
