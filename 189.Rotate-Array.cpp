#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std; 

 void rotate(vector<int>& nums, int k) {
        int n = nums.size() ;
        k = k % n ; // k = 15 , n = 8 => k = 7 rotation
        vector<int> rotated(n) ;
        for(int i = 0 ; i < n ; i++)
        {
            rotated[(i+k) %n] = nums[i] ;
        }
        //copy of vector 
        // for(int i =0 ; i < n ; i++)
        // {
        //     nums[i] = rotated[i] ;
        // }
        // Copy rotated back into nums using std::copy
       copy(rotated.begin(), rotated.end(), nums.begin());
}