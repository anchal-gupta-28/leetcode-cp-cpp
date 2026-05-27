#include<bits/stdc++.h>
using namespace std;

    // Space optimization
    int fib4(int n){
        if(n<=1) return n;
        int a=0;
        int b=1;
        int c=0;
        for(int i=2;i<=n;i++){
            c = a+b;
            a=b;
            b=c;
        }     
        return c;
    }

    // Bottom-up 
    int fib3(int n){
        if(n<=1) return n;
        vector<int>dp(n+1 , -1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }


    // Recursion + Memoisation
    int solve2(int n , vector<int>&dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = solve2(n-1 , dp)+solve2(n-2 , dp);
    }

    int fib2(int n) {
        if(n<=1) return n;
        vector<int>dp(n+1 , -1);
        return solve2( n , dp);
    }

    // Recursion
    int fib1(int n) {
        if(n<=1) return n;
        return fib1(n-1)+fib1(n-2);
    }

    int main(){
        int n;
        cin>>n;
        cout<<"Ans : "<<fib4(n)<<endl;
    }
