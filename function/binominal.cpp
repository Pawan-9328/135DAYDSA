#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
      fact *=i;
    }
    return fact;
}

int binCoeff(int n, int r){
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);

    int result = val1 / (val2 * val3); 
    return result; 
}

int main(){
    cout<<binCoeff(4,2);
   return 0;
}