#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void changeA(int a ){
     a = 20;
     cout<<a<<" \n";
}

//pass by ref using pointer 

void changeB(int *ptr){
      *ptr = 20;
      cout<<*ptr<<"\n"; 
}

int main(){
    int a = 10; 
    changeA(a);
    changeB(&a);

    cout<<a<<" \n";
   return 0;
}