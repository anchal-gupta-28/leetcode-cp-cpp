#include<bits/stdc++.h>
using namespace std;

    void rotate(vector<int>& nums){
        reverse(nums.begin() , nums.end());
        reverse(nums.begin()+1, nums.end());
    }

    int multiply(vector<int>& nums){
        int ans= 0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i]*i;
        }
        return ans;
    }

    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int ans=multiply(nums);
        for(int k=0;k<n;k++){
            rotate(nums);
            int curr=multiply(nums);
            ans=max(ans, curr);
        }

        return ans;
    }

    int main(){
        vector<int>v={4,3,2,6};
        int ans=maxRotateFunction(v);
        cout<<"ans:"<< ans;
    }