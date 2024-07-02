#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a = 5;

   //..creating a reference variables..
   int &b = a;

   cout << a << endl;
   cout << b << endl;

   a++; 

   cout << a << endl;
   cout << b << endl;



      return 0;
}