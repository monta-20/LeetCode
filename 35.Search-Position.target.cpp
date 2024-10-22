#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // Loop through the vector
        for(int i = 0; i < nums.size(); i++) {
            // If current number is greater than or equal to target
            if(nums[i] >= target) return i;
        }
        // If the target is greater than all elements in the array, insert at the end
        return nums.size();
    }
};
/*
Other solution by using tree
int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;        
    }
*/


