#include<bits/stdc++.h>
using namespace std;

int maxOperations(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int s=0;
    int e=nums.size()-1;
    int cnt=0;
    while(s<e){
        if((nums[s]+nums[e])<k) s++;
        else if((nums[s]+nums[e])>k) e--;
        else{
            cnt++;
            s++;
            e--;
        }
    }
    return cnt;
}

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int k;
    cout<<"Enter the value of k:";
    cin>>k;
    int ans=maxOperations(v,k);
    cout<<"Max Operations:"<<ans<<endl;
}