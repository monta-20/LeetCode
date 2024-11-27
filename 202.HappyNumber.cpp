#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std; 

bool isHappy(int n) {
        unordered_set<int> SetHappy;
        while (SetHappy.find(n) == SetHappy.end()) {
            SetHappy.insert(n);
            n = getNextNumber(n);
            if (n == 1)
                return true;
        }
        return false;
}
int getNextNumber(int n) {
        int output = 0;
        while (n > 0) {
            int digit = n % 10;
            output += digit * digit;
            n /= 10;
        }
        return output;
}