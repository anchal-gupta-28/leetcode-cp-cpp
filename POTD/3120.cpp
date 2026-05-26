#include<bits/stdc++.h>
using namespace std;

    int numberOfSpecialChars(string word) {
        unordered_map<char , int>mp;
        for(char ch:word){
            mp[ch]++;
        }

        int ans=0;
        for(char ch :word){
            // if char present.
            if(islower(ch) && mp[ch]>0){
                mp[ch]--;
                ch=toupper(ch);
                if(mp.find(ch)!=mp.end() && mp[ch]>0){
                    ans++;
                    mp[ch]=0;
                }

            }
            else if(isupper(ch) && mp[ch]>0){
                mp[ch]--;
                ch = tolower(ch);
                if(mp.find(ch)!=mp.end() && mp[ch]>0){
                    ans++;
                    mp[ch]=0;
                }
            }
        
        }

        return ans;
    }

    int main(){
        string word ="aaAbcBC"; 
        cout<<"Ans...: "<<numberOfSpecialChars(word)<<endl;
    }
