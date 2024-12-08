#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> ans(nums.size()) ;
        for(int i = 0 ; i < nums.size() ; i++) {
            ans[i] = pow(nums[i] ,2);
        }
    sort(ans.begin() , ans.end()) ;
    return ans ;
}

 int main()
 {
    vector<int> nums = {-4,-1,0,3,10} ;
    vector<int> ans  = sortedSquares(nums) ;
    for(int i = 0 ; i < ans.size() ; i++) {
        cout<<ans[i]<<'.'<<endl ;
    }

 }