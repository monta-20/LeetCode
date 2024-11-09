#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

int missingNumber(vector<int> &nums){
    int size = nums.size() + 1 ;
    int sumArith = (size * (size -1)) / 2 ;
    int sumNums = 0 ;
    for(auto num : nums){
        sumNums +=num ;
    }
    return sumArith - sumNums ; 
       
}

int main(){   
   vector<int> test = {0,1,3} ;
   cout<<missingNumber(test) ;
}