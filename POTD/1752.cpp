#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) cnt++;
        }

        if(nums[0]<nums[n-1]) cnt++;

        if(cnt<=1) return true;
        return false;

        
}

int main(){
    vector<int>v={3,4,5,1,2};
    cout<<check(v)<<endl;
}