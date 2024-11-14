#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std; 

int findPeakElement(vector<int>& nums) {
        
        //First Solution O(n)
        // if(nums[0] > nums[1]) return 0 ;

        // int n = nums.size() ;
        // if(nums[n-1] > nums[n-2]) return n-1 ;
       
        // for (int i = 1 ; i < n-1 ; i++){
        //    if( nums[i] > nums[i-1] && nums[i] > nums[i+1]){
        //       return i  ;
        //    }
        // }
        // return -1 ;
        
        //Second Solution O(log(n)) //binary search
        int left = 0 ;
        int right = nums.size() - 1 ;

        while(left <= right)  {
            int mid =left +  (right - right ) /2 ;
            if( mid > 0 && nums[mid] < nums[mid-1]) {
               
                right = mid -1 ;
            }
            else if( mid< right && nums[mid] < nums[mid+1]){
                 left = mid + 1 ;
            }
            else{
                return mid ;
            }
        }
        return -1 ;
    }