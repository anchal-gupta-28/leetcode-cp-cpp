#include<bits/stdc++.h>
using namespace std;

    // Recursion
    int climbStairs1(int n) {
        if(n<=2) return n;
        return climbStairs1(n-1) + climbStairs1(n-2);
    }

    // Recursion + Memoization
    int climbStairs2(int n , vector<int>dp) {
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        dp[n] = climbStairs2(n-1 , dp) + climbStairs2(n-2 , dp);
        return dp[n];
    }

    // Bottom up + Space optimization
    int climbStairs3(int n) {
        if(n<=2) return n;
        int a = 1;
        int b = 2;
        int c=0;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
    
    int main(){
        int n=3;
        // cout<<"distinct ways can you climb to the top : "<<climbStairs1(n);
        // vector<int>dp(n+1 , -1);
        // cout<<"distinct ways can you climb to the top : "<<climbStairs2(n , dp);
        cout<<"distinct ways can you climb to the top : "<<climbStairs3(n);
    }