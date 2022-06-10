#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n]; //= {3,5,7,8,1};
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
     cout<<"array before reverse"<<endl;
     for (int i = 0; i < n; i++)
     {
         cout<<array[i]<<" ";
     }
     cout<<endl;
     cout<<"array after reverse"<<endl;
     for (int i = n-1; i>=0; i--)
     {
         cout<<array[i]<<" ";
     }
    return 0;
}