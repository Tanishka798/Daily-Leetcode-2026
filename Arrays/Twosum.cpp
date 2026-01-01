#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int b = target - a;

            if (mpp.find(b) != mpp.end()) {
                return {mpp[b], i};
            }
            mpp[a] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
