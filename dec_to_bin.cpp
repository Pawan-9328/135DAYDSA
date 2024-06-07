#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void decTobin(int decNum){
      int n = decNum;
      int pow = 1;
      int binNum = 0;

      while(n>0){
          int rem = decNum %2;
          binNum += rem*pow;
          n = n/2;
          pow = pow*10;
      }
cout<<binNum<<endl;

}


int main(){
   decTobin(7); 
   return 0;
}