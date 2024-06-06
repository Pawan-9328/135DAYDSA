#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
   int fact = 1;
   for (int i = 1; i <= n; i++)
   {
      fact = fact * i;
   }
  cout<<"Factorail ("<< n << ") = " <<fact<<endl;
   return fact; // 0-> 1 , 2, 3
}

int main()
{  
 fact(0);
 fact(1);
 fact(2);
 fact(3);
 fact(4);
 fact(5);

   return 0;
}