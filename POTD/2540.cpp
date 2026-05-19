    #include<bits/stdc++.h>
    using namespace std;

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2=nums2.size();
        int i=0 , j=0;
        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]){
                return nums1[i];
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }

        return -1;
    }

    int main(){
        vector<int> nums1={1 , 2 ,3};
        vector<int>nums2={3,5};
        cout<<"Answer "<<getCommon(nums1 , nums2);
    }