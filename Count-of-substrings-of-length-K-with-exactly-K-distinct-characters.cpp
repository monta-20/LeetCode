#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

int countSubstrings(string s, int K) {
    int n = s.length();
    int count = 0 ;
    for(int i=0 ; i < n-k+1 ; i++){
        string s1 = s.substr(i,K);
        unordered_map<char,int> map ;
        for(auto x : s1){
            map[x]++;
        }
        if(map.size() == s1.size()){
            count++;
        }
    }
    return count ;
}