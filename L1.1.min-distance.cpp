#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std; 

int shortestDistance(vector<string>& s,string word1, string word2) {
    int ans =INT_MAX ;
    int d1 = -1,d2 = -1 ;
    for( int i =0 ; i < s.size() ; i++) {
        if(s[i] == word1){
            d1 = i ;
        }
        if(s[i] == word2){
            d2 = i ;
        }
        if(d1 != -1 && d2!= -1)
        ans = min(ans , abs(d1 - d2)) ;
    }
    return ans ; 
} 

int main()
{
    vector<string> S
        = { "geeks", "for", "geeks", "contribute",  "practice" };
 
    string word1 = "geeks", word2 = "practice";
 
    // Function Call
    cout << shortestDistance(S, word1, word2);
 
    return 0;
}