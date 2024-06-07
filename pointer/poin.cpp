#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   int a = 10;
   int *ptr = &a;
     
   float pi = 3.14;
   float *ptr = &pi;

   cout<<&a<< " = "<<ptr<<" \n";
   return 0;
}