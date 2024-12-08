#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        sort(nums1.begin() , nums1.end()) ;
        sort(nums2.begin() , nums2.end()) ;
        int i = 0 ;
        int j=0 ;
        vector<int> ans ;

        while(i < n1 && j<n2){
            //Use two pointers to find common elements while skipping duplicates.
            while( i+1<n1 && nums1[i]==nums1[i+1]) i++;
            while( j+1<n2 && nums2[j]==nums2[j+1]) j++;
            if(nums1[i] <nums2[j]){
                i++ ;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
            else{
                ans.push_back(nums1[i]);
                i++;
                j++;               
            }
        }
        return ans ;
}