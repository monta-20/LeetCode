#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i  = s.size() - 1;
        int count = 0;

        // Skip trailing spaces
        while(i >= 0 && s[i] == ' ') i--;

        // Count the length of the last word
        while(i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        return count;
    }
};