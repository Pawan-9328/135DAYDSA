#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void changeA(int &a){
   a = 20;
   cout<<a<<"\n"; 
       

}


int main()
{
   int a = 10;
   changeA(a);
   //int &b = a;
 
   //cout << b << "\n";
   cout << a << "\n";
   return 0;
}