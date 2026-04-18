// Tips:Remember this...
// For every consecutive block of k ones:
// Number of substrings = (k*(k+1))/2

#include <iostream>
#include <string>
using namespace std;
int numSub(string &s){
    int ans=0;
    int count=0;

    for(char c:s){
        if(c=='1'){
            count++;
            ans+=count;
        }else{
            count=0;
        }
    }
    return ans;
}
int main() {
    string s = "0110111";
    int ans=numSub(s);
    cout<<ans<<endl;

    return 0;
}