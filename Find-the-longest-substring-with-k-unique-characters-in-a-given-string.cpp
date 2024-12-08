#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

int longestKSubstr(string s, int k) {
    int n = s.length() ;
    int answer = -1 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+ 1; j <=n ; j++){
            unordered_set<char> Distinct(s.begin() + i , s.begin()+j);
             if (Distinct.size() == k) {
                answer = max(answer, j - i);
            }
        }
    }
    return answer ;
}