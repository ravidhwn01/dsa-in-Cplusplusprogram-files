#include <iostream>
#include <bits/stdc++.h>
 const int N = 1e7+10;
long long int arr[N];
  
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
   while (m--)
   {
    int a,b,d;
    cin>>a>>b>>d;
   arr[a]+=d;
   arr[b+1]-=d;
   }
   for (int i = 1 ; i <=n; i++)
   {
    arr[i]+=arr[i-1];
   }
   
   long long max = -1;
   for (int i = 1; i <= n; i++)
   {
    if (max<arr[i])
    {
        max=arr[i];
    }
    
   }
   cout<<max<<endl;
    
    return 0;
}