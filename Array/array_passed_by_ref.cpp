#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void func(int arr[]) {
//       arr[0] = 1000;
// }

void printArr(int arr[], int n)
{
   
   //int n = sizeof(arr) / sizeof(int);
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int main()
{
   int a = 5;
   int *ptr = &a;
   cout << ptr << endl;

   int arr[] = {2, 3, 5, 6, 7};
   int n = sizeof(arr) / sizeof(int);
   cout <<"array size "<<sizeof(arr)<<endl;
   cout << *arr << endl;
   cout << *(arr) << endl;
   cout << *(arr + 1) << endl;

   //func(arr);
   printArr(arr,n);
   cout << arr[0] << endl;
   return 0;
}