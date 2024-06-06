#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    cout<<(a+b) <<endl;
    return a+b;
}

double sum2(double a, double b){
   cout<<(a+b)<<endl;
      return a+b;
}


int main(){
    sum(2,3);
    sum(4,7);
    sum(5,8);
    sum2(2.5,8.9);
   return 0;
}