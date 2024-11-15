#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

int romanToInt(string s) {
        unordered_map<char,int> Map ;
        int sum = 0 ;
        int n =  s.length() ;
        // Insert key-value pairs into the map
        Map.insert({'I', 1});
        Map.insert({'V', 5});
        Map.insert({'X', 10});
        Map.insert({'L', 50});
        Map.insert({'C', 100});
        Map.insert({'D', 500});
        Map.insert({'M', 1000});
        for(int i = 0 ; i < n ; i++){
            if(Map[s[i]] < Map[s[i+1]]){
                sum-=Map[s[i]] ;
            }else{
                sum+=Map[s[i]] ;
            }
        }
        return sum;      
    }