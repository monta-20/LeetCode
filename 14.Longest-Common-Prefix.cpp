#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans ="";
       for(size_t i =0 ; i<strs[0].size();i++){
          char x = strs[0][i];
          for(size_t j = 0 ; j<strs.size(); j++){
            if(strs[j][i]!=x) return ans ; 
          }
          ans+=x;
       }
       return ans ;

    }
};

