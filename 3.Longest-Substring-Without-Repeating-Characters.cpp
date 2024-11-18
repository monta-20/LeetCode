#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;



int lengthOfLongestSubstring(string s) {
    int n = s.length();
    unordered_set<char> charSet; // Store unique characters in the window
    int left = 0, res = 0;
    for (int right = 0; right < n; ++right) {
        // If character is repeated, shrink the window
        while (charSet.find(s[right]) != charSet.end()) {
            charSet.erase(s[left]);
            left++;
        }
        // Add current character to the set and update result
        charSet.insert(s[right]);
        res = max(res, right - left + 1);
    }
    return res;
}

int main() {
    string test = "abcabcbb";
    int res = lengthOfLongestSubstring(test);
    cout << res; // Output: 3
    return 0;
}
