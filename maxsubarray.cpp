 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 int max_Sub_array_Sum(int arr[], int n){
   // int maxsum = 0;
   // int cursum = 0;
   // for (int i = 0; i < n; i++)   // for positive integers 
   // {
   //    cursum = cursum + ar[i];
   //    if (cursum>maxsum)
   //    {
   //       maxsum = cursum;

   //    }
   //    if (cursum<0)
   //    {
   //       cursum = 0;
   //    }
      
      
      
   // }
   //    return maxsum ;
   int temp1=arr[0]; 
int temp2 = arr[0]; 
    for(int i=1; i<n; i++)
    { 
        temp2 = max(arr[i],temp2+arr[i]);   // for +ve and -ve integers
        temp1 = max(temp1, temp2);
    }
    return temp1;
   }

 int main()
 {
    int a[] = {-1,-2,-3,-4};
    int n = sizeof(a) / sizeof(int);
     
     cout<<max_Sub_array_Sum(a,n);

    return 0;
 }
 