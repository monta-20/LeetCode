#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        //split in two part
        int i  = s.size()-1 ;
        int count = 0 ;
        //fix i when is not space
        while(s[i] == ' ') i--;
        //then calculate the result
        while(s[i] !=' ' && i>=0) {
            count++;
            i--;
        }    
        return count ;
    }
};