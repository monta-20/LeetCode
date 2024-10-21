#include <bits/stdc++.h>
#include <iostream>
#include <WinSock2.h>
#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
         // Check for negative numbers or multiples of 10 (except for 0)
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        string str =  to_string(x); //x is convert to string
        int size = str.size();
        for(int i = size - 1 ; i>=0 ; i--){
            if(str[i]!=str[(size- 1) -i ]) return false;
            
        }
        return true ;

    }
};

/*This repository contains various solutions to programming challenges and problems, 
showcasing my problem-solving skills and proficiency in programming language
 C++.The primary aim of this repository is to provide a collection of algorithms and
 implementations that tackle common and complex problems in computer science.*/