#include<bits/stdc++.h>
using namespace std;

# define ll long long

    int pivotIndex(vector<int>& nums) {
        ll ans=-1;
        int n=nums.size();
        ll totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }

        ll leftSum=0;
        ll rightSum=totalSum;
        for(int i=0;i<n;i++){
            if(i>0) leftSum+=nums[i-1];
            // cout<<"The value of leftSum is:"<<leftSum<<endl;
            rightSum=rightSum-nums[i];
            // cout<<"the value of rightSum is:"<<rightSum<<endl;
            if(leftSum==rightSum){
                ans=i;
                break;
            }
        }
        return ans;
    }

    int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int result = pivotIndex(nums);

    cout << "Pivot Index: " << result << endl;

    return 0;
}