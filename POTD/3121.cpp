#include<bits/stdc++.h>
using namespace std;

    int numberOfSpecialChars(string word) {
        vector<int>lastOccSmall(26,-1);
        vector<int>firstOccCapital(26,-1);
        int n=word.length();
        for(int i=0;i<n;i++){
            if(islower(word[i])){
                lastOccSmall[word[i]-'a']=i;
            }else{
                if(firstOccCapital[word[i]-'A']==-1) firstOccCapital[word[i]-'A']=i;
            }
        }

        int ans=0;
        for(int i=0;i<26;i++){
            if(lastOccSmall[i]!=-1 && firstOccCapital[i]!=-1){
                if(lastOccSmall[i]<firstOccCapital[i]) ans++;
            }
        }

        return ans;
    }

    int main(){
        string word = "aaAbcBC";
        cout<<"Ans... : "<<numberOfSpecialChars(word)<<endl;
    }
