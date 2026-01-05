#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int drops = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                drops++;
                if (drops > 1) return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> tests = {
        {3, 4, 5, 1, 2},
        {1, 2, 3},
        {2, 1, 3, 4},
        {1, 1, 1},
        {6, 10, 6}
    };

    for (auto& nums : tests) {
        cout << "[ ";
        for (int x : nums) cout << x << " ";
        cout << "] -> ";

        cout << (sol.check(nums) ? "true" : "false") << endl;
    }

    return 0;
}
