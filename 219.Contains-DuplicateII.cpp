#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size() ;
        for(int i = 0 ; i < n- 1 ;i++) {
            for(int j = i + 1 ; j < n ; j++) {
                if(nums[i] == nums[j] && abs(i-j) <= k) return true ;
            }
        }
        return false ;
}

int main() {
    vector<int> nums = {1,0,1,1} ;
    int k = 2 ;
    cout << containsNearbyDuplicate(nums,k) ;
}