#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   //  int marks[50] = {1,2,3,4,5};
   //  cout<<marks[0]<<endl;
   //  cout<<sizeof(marks) / sizeof(int)<<endl;

   //int arr[5];
   // dynamically array created 
   int n; 
   cout<<"Enter lenght of array ";
   cin>>n;
   int arr[n]; 

   int len = sizeof(arr) / sizeof(int);
   for (int i = 0; i < len; i++)
   {
      cin >> arr[i];
   }
   for (int idx = 0; idx < len; idx++)
   {
      cout << arr[idx] << " ";
   }
   cout << endl;
   return 0;
}