#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

void swapAlternate(int arr[], int n)
{

   for (int i = 0; i < n; i += 2)
   {
      if (i + 1 < n)
      {
         swap(arr[i], arr[i + 1]);
      }
   }
}
int main()
{
   int even[6] = {2, 3, 4, 5, 6, 1};
   int odd[5] = {11, 55, 66, 3, 9};
   swapAlternate(even, 6);
   printArr(even, 6);
   swapAlternate(odd, 5);
   printArr(odd, 6);

   return 0;
}