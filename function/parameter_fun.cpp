#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
   int sum = a + b;
   return sum;
}

int divide(int a, int b)
{
   int div = a - b;
   return div;
}

int main()
{
     int s = sum(7,5);
     cout<<"Sum = " <<s<<endl;
     int d = divide(7,2);
     cout<<" diff = "<<d<<endl;
   return 0;
}