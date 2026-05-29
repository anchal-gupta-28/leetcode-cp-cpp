#include<bits/stdc++.h>
using namespace std;

    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int num:nums){
            int digit=0;
            while(num>0){
                digit+=num%10;
                num=num/10;
            }
            ans=min(ans,digit);
        }
        return ans;
    }

    int main(){
        vector<int> v= {10,12,13,14};
        cout<<"Minimum Element After Replacement With Digit Sum is : "<<minElement(v);
    }
