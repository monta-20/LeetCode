#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

vector<int> unionOfArrays(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> resultSet(nums1.begin(), nums1.end());
    for (int num : nums2) {
        resultSet.insert(num);
    }
    return vector<int>(resultSet.begin(), resultSet.end());
}