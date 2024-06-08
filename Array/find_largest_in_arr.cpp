#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[] = {5, 6, 7, 8, 2};
   int n = sizeof(arr) / sizeof(int);
   int max = arr[0];
   for (int i = 0; i < n; i++)
   {
      if (arr[i] > max)
      {
         max = arr[i];
         cout << "assigning val " << arr[i] << " to max\n";
      }
   }

   cout << "max = " << max << endl;
   return 0;
} 