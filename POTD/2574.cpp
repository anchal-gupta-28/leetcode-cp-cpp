    #include<iostream>
    #include<vector>
    using namespace std;

    // Optimized one...
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int ele:nums) total+=ele;

        vector<int>ans(n);
        int leftSum=0;
        int rightSum=total-nums[0];

        ans[0] = rightSum;
        for(int i=1;i<n;i++){
            leftSum +=nums[i-1];
            rightSum-=nums[i];
            int curr = abs(leftSum-rightSum);
            ans[i]=curr;
        }

        return ans;
    }

    // Brute force....
    // vector<int> leftRightDifference(vector<int>& nums) {
    //     int n=nums.size();

    //     vector<int>leftSum(n);
    //     int curr=0;
    //     leftSum[0]=0;
    //     for(int i=1;i<n;i++){
    //         curr+=nums[i-1];
    //         leftSum[i] = curr;
    //     }

    //     vector<int>rightSum(n);
    //     curr+=nums[n-1];
    //     for(int i=0;i<n-1;i++){
    //         curr = curr-nums[i];
    //         rightSum[i] = curr;
    //     }
    //     rightSum[n-1] = 0;

    //     vector<int>ans(n);
    //     for(int i=0;i<n;i++){
    //         ans[i] = abs(leftSum[i]-rightSum[i]);
    //     }

    //     return ans;
    // }



    int main(){
        vector<int> nums={10,4,8,3};
        vector<int> ans = leftRightDifference(nums);
        for(int ele:ans) cout<<ele<<" ";
        cout<<endl;
    }