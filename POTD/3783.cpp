#include<bits/stdc++.h>
using namespace std;


int mirrorDistance(int n) {
        int num=n;
        string s = to_string(num);
        reverse(s.begin() , s.end());
        num=stoi(s);
        return abs(n-num);
}

int main(){
    int n;
    cout<<"Enter the value od n:";
    cin>>n;
    cout<<"Mirror Distance is :"<<mirrorDistance(n);
}