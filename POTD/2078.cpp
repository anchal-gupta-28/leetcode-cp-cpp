#include <bits/stdc++.h>
using namespace std;

int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1; j<n;j++){
                if(colors[i]!=colors[j]){
                    ans=max(ans , abs(i-j));
                }
            }
        }
        return ans;
    }

int main(){
    vector<int>colors={1,1,1,6,1,1,1};
    cout<<"max Distance is:"<<maxDistance(colors);
}