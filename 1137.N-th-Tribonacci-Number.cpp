#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

int tribonacci(int n) {
        int t1 = 0;
        int t2 = 1;
        int t3 = 1;
        if (n == t1)
            return 0;
        else if (n == t2 || n == 2)
            return 1;
        int res = 0;
        for (int i = 3; i <= n; i++) {
            res = t1 + t2 + t3;
            t1 = t2;
            t2 = t3;
            t3 = res;
        }
        return res;
}