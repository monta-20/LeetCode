#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> subset;
        createSubset(nums, 0, vec, subset);
        return vec;
    }
    void createSubset(vector<int>& nums, int index, vector<vector<int>>& vec,
                      vector<int>& subset) {
        if (index == nums.size()) {
            vec.push_back(subset);
            return;
        }
        // Decision to include nums[i]
        subset.push_back(nums[index]);
        createSubset(nums, index + 1, vec, subset);

        // Decision to NOT include nums[i]
        subset.pop_back();
        createSubset(nums, index + 1, vec, subset);
}