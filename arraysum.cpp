#include <iostream>
using namespace std;
int sum1(int n,int a[]){
    if (n<0)
    {
       return 0;
    }
    
  return sum1(n-1,a) +a[n];
}
int main()
{
    // normal method 
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];

    }
    int l,r;
    cin>>l>>r;
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
      sum+= arr[i];
    }
    cout<<sum<<endl;
    // using recursion 
  int c =   sum1(3,arr);
   cout<< c<<endl;
    return 0;
}