#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverseArr(int arr[], int n)
{

   int start = 0, end = n - 1;

   while (start <= end)
   {
      swap(arr[start], arr[end]);
      start++;
      end--;
   }
}

void printArr(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int main()
{
   int arr[] = {2, 6, 7, 8, 9};
   reverseArr(arr, 5);
   printArr(arr, 5);

   return 0;
}