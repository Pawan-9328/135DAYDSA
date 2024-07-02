#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[10] = {23, 122, 41, 67};

   cout << " address of firts memory block " << arr << endl;
   // cout<<arr[0]<<endl;
   cout << " address of firts memory block " << &arr[0] << endl;

   cout << "4th " << *arr << endl;
   cout << "5th " << *arr + 1 << endl;
   cout << "6th " << *(arr + 1) << endl;

   int i = 3;
   cout << i[arr] << endl;

   int temp[10];
   cout << sizeof(temp) << endl;
   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl;

   return 0;
}