#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0")
            return "0";
        vector<int> res(num1.size() + num2.size(), 0);
        int n1 = num1.size();
        int n2 = num2.size();
        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }
        int i = 0;
        string ans = "";
        while (res[i] == 0)
            i++;
        while (i < res.size())
            ans += to_string(res[i++]);
        return ans;
}