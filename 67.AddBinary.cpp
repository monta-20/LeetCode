#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

string addBinary(string a, string b) {
    string res = "";
    int i = a.length() - 1; // Index for string `a`
    int j = b.length() - 1; // Index for string `b`
    int carry = 0;

    // Iterate while there are digits in either string `a` or `b` or there is a carry
    while (i >= 0 || j >= 0 || carry > 0) {
        int digitA = (i >= 0) ? a[i] - '0' : 0; // Convert character to integer, if valid
        int digitB = (j >= 0) ? b[j] - '0' : 0; // Convert character to integer, if valid
        int total = digitA + digitB + carry;   // Sum of digits and carry

        res += to_string(total % 2);  // Append the binary digit
        carry = total / 2;           // Update the carry

        i--; // Move to the next digit in `a`
        j--; // Move to the next digit in `b`
    }

    reverse(res.begin(), res.end()); // Reverse the result to get the correct order
    return res;
}