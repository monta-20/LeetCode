#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

string addStrings(string num1, string num2) {
    int n1 = num1.length();
    int n2 = num2.length();
    int carry = 0;
    string res = "";

    int i = n1 - 1; // Start from the end of num1
    int j = n2 - 1; // Start from the end of num2

    while (i >= 0 || j >= 0 || carry) { // Loop until all digits are processed or carry remains
        int digitA = (i >= 0 ? num1[i] - '0' : 0); // Get digit from num1 or 0 if out of bounds
        int digitB = (j >= 0 ? num2[j] - '0' : 0); // Get digit from num2 or 0 if out of bounds

        int total = digitA + digitB + carry; // Add digits and carry
        res += to_string(total % 10);       // Append current digit to result
        carry = total / 10;                 // Update carry

        i--; // Move to the next digit in num1
        j--; // Move to the next digit in num2
    }

    reverse(res.begin(), res.end()); // Reverse the result to get the final sum
    return res;
}   