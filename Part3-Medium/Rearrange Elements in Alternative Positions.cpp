// Problem link - https://www.codingninjas.com/studio/problems/alternate-numbers_6783445

// Bruteforce method
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    vector<int> p;
    vector<int> n;
    for(int i=0;i<a.size();i++){
        if(a[i]<0){
            n.push_back(a[i]);
        }
        else{
            p.push_back(a[i]);
        }
    }

    for(int m=0;m<a.size()/2;m++){
        ans.push_back(p[m]);
        ans.push_back(n[m]);
    }
    
   
    return ans;
}


//A Better approach for same problem .

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> ans(a.size(),0);
    int pos=0;
    int neg=1;

    for(int i=0;i<a.size();i++){
        if(a[i]<0){
            ans[neg]=a[i];
            neg+=2;
        }
        else{
            ans[pos]=a[i];
            pos+=2;
        }
    }
    return ans;    
}
