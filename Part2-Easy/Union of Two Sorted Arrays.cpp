// Problem link- https://www.codingninjas.com/studio/problems/sorted-array_6613259
// Solution link 

//I was able to come with idea of using Set and have coded it, other solution idea was easy to come up with but execution 
// of edge cases where the remaining elements are to be added to answer array was tricky part. Saw code and coded it 
//myself into the editor.

// Set Answer 


#include<bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n1=a.size();
    int n2=b.size();
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
     
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }  
    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    } 
    return temp;
}

// Using two pointer approach of each pointer pointing to First element of each vector.

#include <bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    vector<int> ans;
    int i=0;
    int j=0;
    int n=a.size();
    int m=b.size();
    while(i<n&&j<m){
            if(a[i]<=b[j]){
              if(ans.size()==0||ans.back()!=a[i]){
                ans.push_back(a[i]);
              }
              i++;
            }
            if(a[i]>b[j]){
              if(ans.size()==0||ans.back()!=b[j]){
                ans.push_back(b[j]);
              }
              j++;
            }
    }

    while(i<n){
      if(ans.back()!=a[i]){
        ans.push_back(a[i]);
      }
      i++;
    }

    while(j<m){
      if(ans.back()!=b[j]){
        ans.push_back(b[j]);
      }
      j++;
    }
    return ans;
}