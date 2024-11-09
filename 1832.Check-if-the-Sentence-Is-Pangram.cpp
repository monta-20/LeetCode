#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std; 


 bool checkIfPangram(string sentence) {
        vector<bool> check(26,false) ;
        for(int i = 0 ; i < sentence.length() ; i++) {
            if(sentence[i] >='a' && sentence[i] <='z'){
                check[sentence[i] - 'a'] = true ;
            }
            //Check fo uppercase bounus
            else if (sentence[i] >='A' && sentence[i] <='Z'){
                check[sentence[i] - 'A'] = true ;
            }
        }

        for (auto const &e:check){
            if (e == false) return false ;
        }

        return true ;
}