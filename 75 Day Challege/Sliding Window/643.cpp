class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int sum=0;
        for(int i=0;i<k;i++) sum+=nums[i];
        double ans=double(sum)/k;
        i=0;
        int j=k;
        while(j<n && i<n){
            sum=sum-nums[i]+nums[j];
            double curr=(double)sum/k;
            ans=max(ans , curr);
            j++;
            i++;
        }      
        return ans;
    }
};