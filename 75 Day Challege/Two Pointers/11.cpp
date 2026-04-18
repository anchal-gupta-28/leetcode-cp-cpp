#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int ans=0;
        while(i<j){
            int h = min(height[i] , height[j]);
            int w=j-i;
            int area=h*w;
            ans=max(ans , area);
            if(height[i]<height[j]) i++;
            else j--;
        }

        return ans;
    }

    int main(){
        int n;
        cout<<"Enter the value od n:";
        cin>>n;

        vector<int>height(n);
        for(int i=0;i<n;i++) cin>>height[i];

        int ans=maxArea(height);
        cout<<"Max Area is:"<<ans;
    }