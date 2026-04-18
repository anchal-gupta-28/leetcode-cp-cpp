#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
        int n=t.length();
        int j=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            while(t[j]!=ch && j<n){
                j++;
            }
            if(j>=n && t[j]!=ch) return false;
            j++;
        }

        return true;
    }

    int main(){
        string s , t;
        cout<<"Enter strings:";
        cin>>s>>t;
        cout<<isSubsequence(s , t);
    }