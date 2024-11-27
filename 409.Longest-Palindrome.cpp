#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

 int longestPalindrome(string s) {
        unordered_map<char, int> MapPal;
        for (char c : s) {
            MapPal[c]++;
        }
        bool odd = false;
        int largest = 0;
        for (auto& L : MapPal) {
            if (L.second % 2 == 0) {
                largest += L.second;
            } else {
                largest += L.second - 1;
                odd = true;
            }
        }
        if (odd) {
            largest += 1;
        }

        return largest;
}