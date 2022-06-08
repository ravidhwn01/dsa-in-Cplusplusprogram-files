#include <iostream>
using namespace std;
int printarray(int*A , int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int selection_sort(int* A,int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (A[j]<A[i])
            {
                int temp = A[j];
                A[j] = A[i];
                  A[i]=temp;                       
        
                }
            
        }
        
    }
   
}
int main()
{
    int arr[]= {12,2,3,43,54,67,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    printarray(arr,size);
    selection_sort(arr,size);
    printarray(arr,size);
    return 0;
}
