#include<bits/stdc++.h>
using namespace std;

    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        sort(cost.begin(),cost.end());
        int ans=0;
        int curr=0;
        for(int i=n-1;i>=0;i--){
            curr++;
            if(curr==3){
                curr=0;
            }else{
                ans+=cost[i];
            }
        }
        return ans;
    }

    int main(){
        vector<int>cost={1,2,3};
        cout<<"Minimum cost to buy all the items : "<<minimumCost(cost);    
    }