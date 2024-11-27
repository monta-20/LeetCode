#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

string longestPalindrome(string s) {
         if (s.empty()) return "";
        string longest = "";
        for (int i = 0; i < s.length(); i++) {
            // Check for odd-length palindromes (center at i)
            int left = i, right = i;
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                if (right - left + 1 > longest.length()) {
                    longest = s.substr(left, right - left + 1);
                }
                left--;
                right++;
            }            
            // Check for even-length palindromes (center between i and i+1)
            left = i;
            right = i + 1;
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                if (right - left + 1 > longest.length()) {
                    longest = s.substr(left, right - left + 1);
                }
                left--;
                right++;
            }
        }       
        return longest;
}