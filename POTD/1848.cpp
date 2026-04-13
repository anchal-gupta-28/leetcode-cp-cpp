#include <bits/stdc++.h>
using namespace std;

int getMinDistance(vector<int>& nums, int target, int start) {
    int index = 0;
    int mn = INT_MAX;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            index = i;
            mn = min(mn, abs(i - start));
        }
    }
    return mn;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 5;
    int start = 3;

    int ans = getMinDistance(nums, target, start);

    cout << "Minimum Distance: " << ans << endl;

    return 0;
}