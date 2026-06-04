#include <bits/stdc++.h>
using namespace std;

int countPV(int num){
        vector<int>v;
        while(num>0){
            int digit = num%10;
            v.push_back(digit);
            num/=10;
        }
        reverse(v.begin() ,v.end());
        int cnt=0;
        for(int i=1;i<=v.size()-2;i++){
            if((v[i]>v[i-1] && v[i]>v[i+1])|| (v[i]<v[i-1] && v[i]<v[i+1])) cnt++;
        }

        return cnt;
    }

    int totalWaviness(int num1, int num2) {
        if(num2<100) return 0;
        if(num1<100 && num2>100){
            num1=100;
        }
        int ans=0;
        while(num1<=num2){
            ans+=countPV(num1);
            num1++;
        }

        return ans;
    }

    int main(){
        int num1,num2;
        cin>>num1>>num2;
        cout<<totalWaviness(num1,num2)<<endl;
    }