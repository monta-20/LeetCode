#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std; 

int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> hashmap;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     hashmap[nums[i]]++;
        //     if(hashmap[nums[i]] > nums.size() /2) return nums[i] ;
        // }
        // return - 1 ;    

        //Another solution
        
        int n = nums.size() ;
        int count ;
        for(int i = 0 ; i < n ; i++){
            count = 0;
            for(int j = 0 ; j < n ; j++){
                if(nums[i] == nums[j]) {
                    count ++ ;
                }
                if(count > n/2) {
                    return nums[i] ;
                }
            }
        }
        return - 1;        
    }