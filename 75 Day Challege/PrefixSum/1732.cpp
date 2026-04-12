#include<bits/stdc++.h>
using namespace std;

int largestAltitude(vector<int>& gain) {
        int ans=0;
        int curr=0;
        for(int i=0;i<gain.size();i++){
            curr=curr+gain[i];
            ans=max(ans , curr);
        }
        return ans;
}


int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans=largestAltitude(v);
    cout<<"Large altitude is :"<<ans<<endl;
}