#include <bits/stdc++.h>
#include <iostream>
#include<string>
using namespace std;

int addDigits(int num) {
        int sum = 0 ;
        while(num > 0 ){
           int digit = num % 10 ; 
            sum+=digit;
            num/=10;
            if( num ==0 && sum > 9){
                num = sum ; //11
                sum =0;
            }
        }
        return sum ;
}