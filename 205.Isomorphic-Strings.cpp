#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

bool isIsomorphic(string s, string t) {
        unordered_map<char,int> MapS ,MapT ;
        int n = s.length() ;
        for(int i =  0 ; i < n ; i++) {
            if(MapS.find(s[i]) == MapS.end()) {
                MapS[s[i]] = i ;
            }

            if(MapT.find(t[i]) == MapT.end()) {
                MapT[t[i]] = i ;
            }

            if(MapS[s[i]] != MapT[t[i]]){
                return false ;
            }
        }
        return true ;
}