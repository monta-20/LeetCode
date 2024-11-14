#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;


vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rows = mat.size()  ; 
        int cols = mat[0].size() ;
        int index = 0 ;
        int count ;
        int maxi = 0 ;
        for(int i = 0 ; i < rows ; i++) {
            count = 0 ;
            for(int j = 0 ; j < cols ; j++) {
                if(mat[i][j] == 1 ) count++ ;
            }
            //int maxi = max(count , maxi) ;
            if(count > maxi ) {
                maxi = count ;
                index = i ;
            }
        }
        vector<int> res = {index, maxi}

        return res ;

}