#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0, sum = 0, res = INT_MAX;

        for (int j = 0; j < n; j++) {
            sum += nums[j];

            // Shrink the window until the sum is less than the target
            while (sum >= target) {
                res = min(res, j - i + 1);
                sum -= nums[i];
                i++;
            }
        }
        // If no valid subarray was found, return 0
        return (res == INT_MAX) ? 0 : res;
}