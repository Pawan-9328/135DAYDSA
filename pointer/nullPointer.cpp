#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   int *ptr = NULL;
   cout<<ptr<<" \n";
   // segmentation fault  
   cout<<*ptr<<" \n";
   
   return 0;
}