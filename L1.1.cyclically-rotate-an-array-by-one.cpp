/*Given an array, the task is to cyclically rotate the array clockwise by one time. 

Examples:  


Input: arr[] = {1, 2, 3, 4, 5} 
Output: arr[] = {5, 1, 2, 3, 4}


Input: arr[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5}*/


#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;


 vector<int> rotateByOne(vector<int> &arr) {
       int x = arr[arr.size() -1] ;
       int i = arr.size() - 1 ;
       while(i > 0) {
            arr[i] = arr[i-1] ;
            i--;
       }
       arr[0] = x ;
       return arr;
}
int main() {
   vector<int> arr = {1, 2, 3, 4, 5} ;
   vector<int> res = rotateByOne(arr) ;
   for(int i =0 ; i < res.size() ; i++){
    cout<<res[i]<<endl ;
   }
}