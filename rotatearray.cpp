#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 void rotate(int arr[], int n)
{
   int temp=arr[n-1];
   
   for(int i=n-2;i>=0;i--){
       arr[i+1]=arr[i];
   }
   arr[0]=temp;}
int main()
{
    int a[] = {12, 4, 5, 6, 7, 98, 0, 8, 877, 54345, 32445, 90};
    int n = sizeof(a) / sizeof(int);
    cout << n << endl;
  rotate(a,n);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
    
  }
  

    return 0;
}