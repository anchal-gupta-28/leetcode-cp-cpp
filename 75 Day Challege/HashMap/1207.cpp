#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }

    unordered_set<int> s;
    for (auto &it : freq) {
        int cnt = it.second;

        if (s.find(cnt) != s.end()) return false;
        else s.insert(cnt);
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2,  1, 1, 3};

    bool ans = uniqueOccurrences(arr);

    if (ans) cout << "true";
    else cout << "false";

    return 0;
}