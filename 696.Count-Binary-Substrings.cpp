#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;


int countBinarySubstrings(string s) {
        int i = 1;
        int count = 0;
        int prev = 0;
        int curr = 1;
        int n = s.length();
        while (i < n) {
            if (s[i - 1] != s[i]) {
                count += min(prev, curr);
                prev = curr;
                curr = 1;
            } else {
                curr++;
            }
            i++;
        }
        return count += min(prev, curr);
}