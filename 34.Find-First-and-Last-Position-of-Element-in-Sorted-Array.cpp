#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std; 

int findFirstPosition(vector<int>& nums , int target)  {
        int begin = 0 ;
        int end =  nums.size() - 1 ;
        int index = - 1;
        while(begin <= end) {
            int mid = (begin + end ) / 2 ;
            if(nums[mid] == target) {
                index = mid ;
                end = mid -1 ;
            }
            else if(nums[mid] < target) {
                begin = mid + 1 ;
            }
            else{
                end = mid - 1 ;
            }
        }
        return index ;
    }

    int findLastPosition(vector<int>& nums , int target)  {
        int begin = 0 ;
        int end =  nums.size() - 1 ;
        int index = - 1;
        while(begin <= end) {
            int mid = (begin + end ) / 2 ;
            if(nums[mid] == target) {
                index = mid ;
                begin = mid +1 ;
            }
            else if(nums[mid] > target) {
                end = mid - 1 ;
            }
            else{
                begin = mid + 1 ;
            }
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

    int first = findFirstPosition(nums ,target) ;
    
    int last = findLastPosition(nums , target) ;
    vector<int> vec ;

    vec.push_back(first) ;
    vec.push_back(last) ;
    return vec ;
    }