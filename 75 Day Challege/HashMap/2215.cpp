#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    set<int> s1;
    for (int num : nums1) {
        auto it = find(nums2.begin(), nums2.end(), num);
        // if  not found.
        if (it == nums2.end()) s1.insert(num);
    }

    set<int> s2;
    for (int num : nums2) {
        auto it = find(nums1.begin(), nums1.end(), num);
        if (it == nums1.end()) s2.insert(num);
    }

    vector<int> v1(s1.begin(), s1.end());
    vector<int> v2(s2.begin(), s2.end());

    return {v1, v2};
}

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    vector<vector<int>> ans = findDifference(nums1, nums2);

    // Print result
    for (auto &vec : ans) {
        cout << "[ ";
        for (auto x : vec) cout << x << " ";
        cout << "] ";
    }

    return 0;
}