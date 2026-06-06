    #include<iostream>
    #include<vector>
    using namespace std;

    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();

        vector<int>leftSum(n);
        int curr=0;
        leftSum[0]=0;
        for(int i=1;i<n;i++){
            curr+=nums[i-1];
            leftSum[i] = curr;
        }

        vector<int>rightSum(n);
        curr+=nums[n-1];
        for(int i=0;i<n-1;i++){
            curr = curr-nums[i];
            rightSum[i] = curr;
        }
        rightSum[n-1] = 0;

        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i] = abs(leftSum[i]-rightSum[i]);
        }

        return ans;
    }

    int main(){
        vector<int> nums={10,4,8,3};
        vector<int> ans = leftRightDifference(nums);
        for(int ele:ans) cout<<ele<<" ";
        cout<<endl;
    }