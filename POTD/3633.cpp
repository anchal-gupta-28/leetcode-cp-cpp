#include <bits/stdc++.h>
using namespace std;

    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int landFinish=landStartTime[i]+landDuration[i];
                int total1= max(landFinish ,waterStartTime[j])+waterDuration[j];
                ans = min(ans , total1);

                int waterFinish=waterStartTime[j]+waterDuration[j];
                int total2=max(waterFinish ,landStartTime[i])+landDuration[i];
                ans=min(ans, total2);
            }
        }
        return ans;
    }

    int main(){
        vector<int> landStartTime={1,4,3};
        vector<int> landDuration={2,3,1};
        vector<int> waterStartTime={2,5};
        vector<int> waterDuration={3,2};
        int ans=earliestFinishTime(landStartTime, landDuration, waterStartTime, waterDuration);
        cout<<"ans:"<< ans;
    }