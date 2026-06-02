#include<iostream>
#include<vector>
using namespace std;

void backtrack(vector<int>& nums, int start, vector<vector<int>>& result){
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        backtrack(nums, start + 1, result);
        swap(nums[start], nums[i]);
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result;
    backtrack(nums, 0, result);

    for(const auto& perm : result) {
        for(int x : perm) cout << x << " ";
        cout << endl;
    }
    return 0;
}

