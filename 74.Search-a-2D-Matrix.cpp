#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size() ;
    int cols = matrix[0].size() ;

    int i = 0 ;
    int j = cols - 1;

    while(i<rows && j > -1 ){
        if(matrix[i][j] == target) {
            return true ;
        }
        else if(matrix[i][j] < target) {
            i++;
        }
        else{
            j--;
        }
    }
    return false;
    
        
}


int main(){
     vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    bool res = searchMatrix(matrix, target);

    cout << (res ? "Found" : "Not Found") << endl;
}